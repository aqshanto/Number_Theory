#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;
int N=1e7;
#define Max 10000000
int prime[Max/32];

int setbit(int n,int pos){
    n= n|(1<<pos);
    return n;
}
bool checkbit(int n,int pos){
    n=n& (1<<pos);
    return n;
}

void sieve(){
    prime[0/32]=setbit(prime[(0/32)], (0%32));
    prime[1/32]=prime[(1/32)] | (1<<(1%32));
    for(int i=4;i<=N;i+=2){
        prime[i/32]=prime[(i/32)] | (1<<(i%32));
    }
    int x=sqrt(N)+1;
    for(int i=3;i<=x;i+=2){
        if(!(prime[(i/32)] & (1<<(i%32)))){
            for(int j=i*i;j<=N;j+=(i+i)){
                prime[j/32]=prime[(j/32)] | (1<<(j%32));
            }
        }
    }
}

void solve(){
    int n;
    cin>>n;
    int cnt=0;
    for(int i=2;i<=n;i++){
        if(!(prime[(i/32)] & (1<<(i%32)))){
            cout<<i<<" ";
            cnt++;
            if(cnt%5==0){
                cout<<endl;
            }
        }
    }
    if(cnt%5!=0)cout<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    sieve();
    // int t; cin>>t; while(t--) solve();
    solve();
    return 0;
}