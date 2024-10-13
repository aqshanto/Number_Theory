#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;
/*Input:
3
100000 100000
12 24
747794 238336
*/

/*ouput:
36
6
2
*/
int N=1e7;
vector<bool>check_prime(N+1);
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
    map<int,int>prime_factor;
    vector<int>prime_factor_count;
    int a,b;
    cin>>a>>b;
    int n=__gcd(a,b);
    for(int i=0;i<prime_num.size()&& prime_num[i]*prime_num[i]<=n;i++){
        while(n%prime_num[i]==0){
            n/=prime_num[i];
            prime_factor_count.push_back(prime_num[i]);
            prime_factor[prime_num[i]]++;
        }
    }
    if(n>1)prime_factor_count.push_back(n);
    // if(n>1)prime_factor[n]++;

    //Method 1

    // ll ans=1;
    // for(auto &it:prime_factor){
    //     ans*=(it.second+1);
    // }
    // cout<<ans<<endl;
    
    //Method 2
    ll ans=1;
    int cnt=1;
    for(int i=1;i<prime_factor_count.size();i++){
        if(prime_factor_count[i]==prime_factor_count[i-1]){
            cnt++;
        }else{
            ans*=(cnt+1);
            cnt=1;
        }
    }
    ans*=(cnt+1);
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    sieve();
    int t; cin>>t; while(t--) solve();
    // solve();
    return 0;
}