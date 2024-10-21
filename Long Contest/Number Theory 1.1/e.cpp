#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;
int N=20000000;
vector<bool>v(N,false);
vector<pair<int,int>>prime_num;

void sieve(){
    v[0]=true;
    v[0]=true;
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
    for(int i=3;i<=N;i+=2){
        if(!v[i] && !v[i+2]){
            prime_num.push_back({i,i+2});
            // cout<<i <<" "<<i+2<<endl;
        }
    }
    // cout<<prime_num.size()<<endl;
}

void solve(){
    int n;
    while(cin>>n){
        cout<<"("<<prime_num[n-1].first <<", "<<prime_num[n-1].second <<")"<<endl;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    sieve();
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}