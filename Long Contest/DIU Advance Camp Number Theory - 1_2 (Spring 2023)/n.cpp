#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;

void solve(){
    int n;
    cin>>n;
    int cnt=0;
    for(int i=1;i<=n;i++){
        int gcd=__gcd(i,n);
        if(gcd==1){
            cnt++;
        }
    }
    cout<<cnt<<endl;    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int t; cin>>t; while(t--) solve();
    solve();
    return 0;
}