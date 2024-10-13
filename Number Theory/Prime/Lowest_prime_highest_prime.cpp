#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;
int N=1e7;
vector<bool>v(N+1,false);
vector<int>lowest_primes(N+1,0),highest_primes(N+1,0);

void sieve(){
    v[0]=true;
    v[1]=true;
    int x=sqrt(N)+1;
    for(int i=2;i<=N;i++){
        if(!v[i]){
            for(int j=i;j<=N;j+=i){
                highest_primes[j]=i;
                v[j]=true;
                if(lowest_primes[j]==0){
                    lowest_primes[j]=i;
                }
            }
        }
    }
}

void solve(){
    for(int i=1;i<=N;i++){
        cout<<lowest_primes[i]<<" "<<highest_primes[i]<<endl;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    sieve();
    // int t; cin>>t; while(t--) solve();
    solve();
    return 0;
}