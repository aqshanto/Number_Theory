#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;

void solve(){
    int a;
    cin>>a;
    // jodi 2^n ebon 2^n-1 er '&' korle jodi 0 ase thle seta 2^n otherwise na 
    cout<<(a& a-1)<<endl;
    if((a&a-1))cout<<"2^n na"<<endl;
    else cout<< "yes, this is 2^n"<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int t; cin>>t; while(t--) solve();
    solve();
    return 0;
}