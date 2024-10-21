#include<bits/stdc++.h>
using namespace std;
#define mod 998244353
#define ll long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;

void solve(){
    int n;
    cin>>n;
    int ans=1;
    for(int i=2;i<=n;i++){
        ans=((ans*1LL*i)%mod);
    }
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int t; cin>>t; while(t--) solve();
    solve();
    return 0;
}