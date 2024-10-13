#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;

void solve(){
    // we can find if the number is even or odd using '&' operator
    int a;
    cin>>a;
    if(a&1)cout<<"odd"<<endl;
    else cout<<"even"<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int t; cin>>t; while(t--) solve();
    solve();
    return 0;
}