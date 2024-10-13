#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;
int N=1e7;
vector<bool>check_prime(N+1);
vector<int>prime_num;

void sieve(){
    check_prime[0]=true;
    check_prime[1]=true;
    for(int i=4;i<=N;i+=2){
        check_prime[i]=true;
    }
}

void solve(){
    vector<int>prime_factor;
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int t; cin>>t; while(t--) solve();
    solve();
    return 0;
}