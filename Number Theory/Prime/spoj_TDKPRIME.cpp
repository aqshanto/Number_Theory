#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;
/*
7
1
10
100
1000
10000
100000
1000000
*/
/*
2
29
541
7919
104729
1299709
15485863
*/

int N=9e7;
vector<bool>check_prime(N+1,true);
vector<int>a;

void sieve(){
    check_prime[0]=false;
    check_prime[1]=false;
    for(int i=4;i<=N;i+=2){
        check_prime[i]=false;
    }
    int x=sqrt(N)+1;
    for(int i=3;i<=x;i+=2){
        if(check_prime[i]){
            for(int j=i*i;j<=N;j+=(i+i)){
                check_prime[j]=false;
            }
        }
    }
    for(int i=2;i<=N;i++){
        if(check_prime[i])
            a.push_back(i);
    }
}
void solve(){
    int n;
    cin>>n;
    cout<<a[n-1]<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    sieve();
    int t; cin>>t; while(t--) solve();
    // solve();
    return 0;
}