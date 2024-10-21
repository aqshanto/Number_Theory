#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;
ll mod =109546051211;

ll binaryMultiply(ll a,ll b){
    ll ans=0;
    while(b){
        if(b&1){
            ans=(ans+a)%mod;
        }
        a=(a+a)%mod;
        b=b>>1;
    }
    return ans;
}

void solve(){
    ll n;
    cin>>n;
    ll ans=1,fac=1;
    for(int i=1;i<=n;i++){
        fac=(fac*i)%mod;
        ans=binaryMultiply(ans,fac);
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