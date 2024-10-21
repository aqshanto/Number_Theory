#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;

void solve(){
    int n;
    cin>>n;
    int multi = 998244353;
    int remin=n%multi;
    if(n>=0){
        cout<<remin<<endl;
    }else{
        int re=(n*-1)%multi;
        if(re==0)cout<<0<<endl;
        else cout<<(multi-re)<<endl;
    }
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int t; cin>>t; while(t--) solve();
    solve();
    return 0;
}