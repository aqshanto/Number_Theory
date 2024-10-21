#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;

void solve(){
    int n,m;
    cin>>n>>m;
    if(n>32){
        cout<<m<<endl;
    }else{
        int val=1;
        while(n--){
            val=val*2;
        }
        cout<<m%val<<endl;
    }
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int t; cin>>t; while(t--) solve();
    solve();
    return 0;
}