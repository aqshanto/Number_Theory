#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;
int mod=1e9+7;
/*
a<=10^9 , b<=10^9 , M<=10^9
*/

int binaryExponentInteration(ll a,ll b){
    int ans=1;
    while(b>0){
        if(b&1){
            ans=(ans*1LL*a)% mod;
        }
        a = (a*1LL*a)%mod;
        b=(b>>1);
    }
    return ans;
}

ll BinaryExpo(ll base,ll power){ // looks easiest and easily memorizable
    ll result =1;
    while(power){
        if(power%2==1){
            result=(result*base)%mod;
            power--;
        }else{
            base=(base*base)%mod;
            power/=2;
        }
    }
    return result;
}

void solve(){
    ll a,b;
    cin>>a>>b;
    cout<<binaryExponentInteration(a,b)<<endl;
    cout<<BinaryExpo(a,b)<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int t; cin>>t; while(t--) solve();
    solve();
    return 0;
}