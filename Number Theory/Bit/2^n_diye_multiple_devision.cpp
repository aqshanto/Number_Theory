#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;

void solve(){
    // 2^n diye vag ba gun
    // gun korar jonne left shift
    // vag korar jonne right shift
    int a,b;
    cin>>a>>b;
    cout<<a<<"*(2^"<<b<<") = "<<(a<<b)<<endl;
    cout<<a<<"\\(2^"<<b<<") = "<<(b>>a)<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int t; cin>>t; while(t--) solve();
    solve();
    return 0;
}