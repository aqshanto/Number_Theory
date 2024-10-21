#include<bits/stdc++.h>
using namespace std;
#define mod 998244353
#define ll long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;

void solve(){
    int n;
    cin>>n;
    int f=1,s=1;
    for(int i=3;i<=n;i++){
        if(i%2==1){
            f=(f+s)%mod;
        }else if(i%2==0){
            s=(s+f)%mod;
        }
    }
    if(n%2==0)
        cout<<s<<endl;
    else
        cout<<f<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int t; cin>>t; while(t--) solve();
    solve();
    return 0;
}