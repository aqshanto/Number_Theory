#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;

void prime_factor(int n){
    for(int i=2;i*i<=n;i++){
        int cnt=0;
        if(n%i==0){
            while(n%i==0){
                cnt++;
                n/=i;
            }
            cout<<i<<'^'<<cnt<<" ,";
        }
    }
    if(n>1)cout<<n<<"^"<<1<<endl;
}

void solve(){
    int n;
    cin>>n;
    prime_factor(n);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int t; cin>>t; while(t--) solve();
    solve();
    return 0;
}