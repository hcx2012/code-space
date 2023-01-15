#include <iostream>
using namespace std;
long long f[4010];
const long long MOD=2147483647;
int main(){
    long long n;
    cin>>n;
    f[0]=1;
    for(int i=1;i<=n-1;i++){
        for(int j=i;j<=n;j++){
            f[j]=(f[j]+f[j-i])%MOD;
        }
    }
    cout<<f[n];
    return 0;
}
