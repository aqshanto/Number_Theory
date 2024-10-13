#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;

int GCD(int a,int b){
    if(b==0)return a;
    if(a<b)swap(a,b);
    int r=a%b;
    return GCD(b,r);
}
int LCM(int a,int b){
    int m=abs(a*b);
    return m/GCD(a,b);
}

void solve(){
    int a,b;
    cin>>a>>b;
    cout<<GCD(a,b)<<endl;
    cout<<LCM(a,b)<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int t; cin>>t; while(t--) solve();
    solve();
    return 0;
}