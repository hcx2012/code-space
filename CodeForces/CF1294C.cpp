#include <iostream>
#include <cstring>
using namespace std;
bool vis[32000];
int yinzi(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0&&(!vis[i])){
            vis[i]=true;
            return i;
        }
    }
    return 0;
}
int main(){
    int N;
    cin>>N;
    while(N--){
        memset(vis,0,sizeof(vis));
        int n;
        cin>>n;
        int a=yinzi(n);
        if(a==0){
            cout<<"NO\n";
            continue;
        }
        n/=a;
        int b=yinzi(n);
        if(b==0){
            cout<<"NO\n";
            continue;
        }
        if(n%b!=0||n/b==b||n/b==a){
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";
        cout<<a<<" "<<b<<" "<<n/b<<endl;
    }
    return 0;
}
