#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;
const long long mod=1e18+7;

/*
a<=10^18 b<=10^9 m<=10^18
*/

// for both a & m <=10^18
long long binaryMultiply(long long a,long long b){
    long long ans=0;
    while(b){
        if(b&1){
            ans=(ans+a)%mod;
        }
        a=(a+a)%mod;
        b=b>>1;
    }
    return ans;
}

long long binaryexpo(long long a,long long b){
    long long ans=1;
    while(b){
        if(b&1){
            ans=binaryMultiply(ans,a);
        }
        a=binaryMultiply(a,a);
        b=b>>1;
    }
    return ans;
}


long long binexpo(ll base,ll power){
    ll ans=1;
    while(power){
        if(power%2==1){
            // ans=(ans*base)%mod;
            ans=binaryMultiply(ans,base);
            power--;
        }else{
            // base=(base*base)%mod;
            base=binaryMultiply(base,base);
            power/=2;
        }
    }
    return ans;
}

void solve(){
    ll a,b;
    cin>>a>>b;
    cout<<binaryexpo(a,b)<<endl;
    cout<<binexpo(a,b)<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int t; cin>>t; while(t--) solve();
    solve();
    return 0;
}