#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;
const int mod=1e9+7;

/*
a<=10^18 , b<=10^9 , M<=10^18
*/

// for a<=10^18

int binaryExpo(int a,int b){
    int ans=1;
    a=a%mod;
    while(b){
        if(b&1){
            ans=(ans*1LL*a)%mod;
        }
        a=(a*1LL*a)%mod;
        b= b>>1;
    }
    return ans;
}

void solve(){
    int a,b;
    cin>>a>>b;
    cout<<binaryExpo(a,b)<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int t; cin>>t; while(t--) solve();
    solve();
    return 0;
}