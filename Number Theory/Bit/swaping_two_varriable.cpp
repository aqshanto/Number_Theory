#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;

void solve(){
    int a,b;
    cin>>a>>b;
    cout<<"before swaping:"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"after swaping:"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int t; cin>>t; while(t--) solve();
    solve();
    return 0;
}