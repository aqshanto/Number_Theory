#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;

ll BinaryExponentRecursion(int a,int b){
    if(b==0)return 1;
    ll num=BinaryExponentRecursion(a,b/2);
    // cout<<a<<" "<<b<<" "<<num<<endl;
    if(b&1){
        return a*num*num;
    }else{
        return num*num;
    }
}

void solve(){
    int a,b;
    cin>>a>>b;
    cout<<BinaryExponentRecursion(a,b)<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int t; cin>>t; while(t--) solve();
    solve();
    return 0;
}