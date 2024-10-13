#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;
int N=1e7;
vector<bool>check_prime(10000001);
vector<int>prime_num;

void sieve(){
    check_prime[0]=true;
    check_prime[1]=true;
    for(int i=4;i<=N;i+=2){
        check_prime[i]=true;
    }
    int x=sqrt(N)+1;
    for(int i=3;i<=x;i+=2){
        if(!check_prime[i]){
            for(int j=i*i;j<=N;j+=(i+i)){
                check_prime[j]=true;
            }
        }
    }
    for(int i=2;i<=N;i++){
        if(!check_prime[i]){
            prime_num.push_back(i);
        }
    }
}

void solve(){
    int n;
    cin>>n;
    set<int>prime_factor;
    int original =n;
    for(int i=0;(prime_num[i]*prime_num[i])<=n;i++){
        while(n%prime_num[i]==0){
            prime_factor.insert(prime_num[i]);
            n/=prime_num[i];
        }
    }
    if(n>1)prime_factor.insert(n);
    for(auto &it:prime_factor){
        cout<<it<<" ";
    }cout<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    sieve();
    // int t; cin>>t; while(t--) solve();
    solve();
    return 0;
}