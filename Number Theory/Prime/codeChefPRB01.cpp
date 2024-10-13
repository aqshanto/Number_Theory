#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;
/*
5
23
13
20
1000
99991
*/
/*
yes
yes
no
no
yes
*/
int N=100000;
vector<bool>check_prime(N+1,true);

void sieve(){
    check_prime[0]=false;
    check_prime[1]=false;
    for(int i=4;i<=N;i+=2){
        check_prime[i]=false;
    }
    int x=sqrt(N)+1;
    for(int i=3;i<=x;i++){
        if(check_prime[i]){
            for(int j=i*i;j<=N;j+=(i+i)){
                check_prime[j]=false;
            }
        }
    }
}

void solve(){
    int n;
    cin>>n;
    check_prime[n]?cout<<"YES"<<endl:cout<<"NO"<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    sieve();
    int t; cin>>t; while(t--) solve();
    // solve();
    return 0;
}