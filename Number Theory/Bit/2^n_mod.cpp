#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;

void solve(){
    int n,d;
    cin>>n>>d;
    // eta check korar jonne d-1(2^n-1) dara & korte hbe
    cout<<"mod is "<<(n&(d-1))<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int t; cin>>t; while(t--) solve();
    solve();
    return 0;
}