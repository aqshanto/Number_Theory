#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;
/*
3
10 20
10 100
100 10000
*/
/*
1
10
576
*/
int N=1000000;
vector<bool>check_prime(N+1,true);

void sieve_of_eratosthenes(){
    check_prime[0]=false;
    check_prime[1]=false;
    for(int i=4;i<=N;i+=2){
        check_prime[i]=false;
    }
    int x=sqrt(N)+1;
    for(int i=3;i*i<=N;i+=2){
        if(check_prime[i]){
            for(int j=i*i;j<=N;j+=(i+i)){
                check_prime[j]=false;
            }
        }
    }
}

int digit_sum_of(int n){
    int sum=0;
    while(n>0){
        int digit=n%10;
        sum+=digit;
        n/=10;
    }
    return sum;
}

void solve(){
    int a,b,cnt=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(check_prime[i]){
            int digit_sum=digit_sum_of(i);
            if(check_prime[digit_sum]){
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    sieve_of_eratosthenes();
    int t; cin>>t; while(t--) solve();
    return 0;
}