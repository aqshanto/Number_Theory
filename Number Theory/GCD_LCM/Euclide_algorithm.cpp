#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;

int GCD(int a,int b){
    int temp;
    if(a<b)swap(a,b);
    while(a%b!=0){
        temp=a;
        a=b;
        b=temp%b;
    }
    return b;
}

void solve(){
    int a,b;
    cin>>a>>b;
    cout<<GCD(a,b)<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int t; cin>>t; while(t--) solve();
    solve();
    return 0;
}