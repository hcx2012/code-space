#include <iostream>
using namespace std;
int v[25],p[25]; // v[i]表示每件物品的价格，p[i]表示物品重要度与价格的乘积
int f[31000];
int main(){
    int N,m;
    cin>>N>>m;
    int t1,t2;
    for(int i=1;i<=m;i++){
        cin>>t1>>t2;
        v[i]=t1;
        p[i]=t1*t2;
    }
    for(int i=1;i<=m;i++){
        for(int j=N;j>=v[i];j--){
            if(j>=v[i]) {
                f[j]=max(f[j],f[j-v[i]]+p[i]);
            }
        }
    }
    cout<<f[N];
    return 0;
}
