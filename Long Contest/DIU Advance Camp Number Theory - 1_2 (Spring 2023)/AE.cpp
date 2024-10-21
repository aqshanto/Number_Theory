#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;

ll binexpo(ll base,ll power,ll mod){
    ll ans=1;
    while(power){
        if(power%2==1){
            ans=((ans*base*1LL)%mod);
            power--;
        }else{
            base=((base*base)%mod);
            power/=2;
        }
    }
    return ans;
}

int binExpo(int a,int b,int mod){
    int ans=1;
    while(b){
        if(b&1){
            ans=(ans*1LL*a)%mod;
        }
        a=(a*a*1LL)%mod;
        b=b>>1;
    }
    return ans;
}

void solve(){
    ll a,b,m;
    while(cin>>a>>b>>m){
        // cout<<binexpo(a,b,m)<<endl;
        cout<<binExpo(a,b,m)<<endl;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int t; cin>>t; while(t--) solve();
    solve();
    return 0;
}