#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;
int N=1e6+5;
vector<int>prime(N,0);

void solve(){
    int n,cnt=0;
    cin>>n;
    cout<<prime[n]<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(int i=1;i<=N;i++){
        for(int j=i;j<=N;j+=i){
            prime[j]++;
        }
    }
    int t; cin>>t; while(t--) solve();
    // solve();
    return 0;
}