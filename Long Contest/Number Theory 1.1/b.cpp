#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;

void solve(){
    int n;
    while(cin>>n){
        if(n&1){
            int sum=n;
            while(n>=3){
                sum+=(n/3);
                n=(n/3)+(n%3);
            }
            cout<<sum<<endl;
        }else{
            int sum=n;
            n++;
            while(n>=3){
                sum+=(n/3);
                n=(n/3)+(n%3);
            }
            cout<<sum<<endl;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int t; cin>>t; while(t--) solve();
    solve();
    return 0;
}