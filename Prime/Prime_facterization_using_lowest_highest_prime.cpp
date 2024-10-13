#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;
int N=1e5;
vector<bool>v(N+1,false);
vector<int>low_prime(N+1,0),high_prime(N+1,0);

void sieve(){
    v[0]=true;
    v[1]=true;
    for(int i=2;i<=N;i++){
        if(!v[i]){
            low_prime[i]=high_prime[i]=i;
            for(int j=2*i;j<=N;j+=i){
                high_prime[j]=i;
                v[j]=true;
                if(low_prime[j]==0){
                    low_prime[j]=i;
                }
            }
        }
    }
}

void solve(){
    int n;
    cin>>n;
    map<int,int>prime_factors;
    while(n>1){
        int prime_factor=high_prime[n];
        while(n%prime_factor==0){
            n/=prime_factor;
            prime_factors[prime_factor]++;
        }
    }
    for(auto it:prime_factors){
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    sieve();
    // int t; cin>>t; while(t--) solve();
    solve();
    return 0;
}