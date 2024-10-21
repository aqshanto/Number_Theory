#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;
int N=1e6;
vector<bool>v(N+1,false);
vector<int>prime_num;

void sieve(){
    v[0]=true;
    v[1]=true;
    for(int i=4;i<=N;i+=2){
        v[i]=true;
    }
    int x=sqrt(N)+1;
    for(int i=3;i<=x;i+=2){
        if(!v[i]){
            for(int j=i*i;j<=N;j+=(i+i)){
                v[j]=true;
            }
        }
    }
    prime_num.push_back(0);
    for(int i=2;i<=N;i++){
        if(!v[i]){
            prime_num.push_back(i);
        }
    }
}

void solve(){
    int n;
    cin>>n;
    cout<<prime_num[n]<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    sieve();
    int t; cin>>t; while(t--) solve();
    // solve();
    return 0;
}