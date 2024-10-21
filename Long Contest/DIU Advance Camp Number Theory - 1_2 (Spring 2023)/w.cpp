#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;
int N=1e7;
vector<bool>v(N,false);

void sieve(){
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
}

void solve(){
    string str;
    while(cin>>str){
        ll sum=0;
        int n=str.size();
        for(int i=0;i<n;i++){
            if(str[i]<='z' && str[i]>='a'){
                sum+=((int)str[i]-96);
            }else if(str[i]<='Z' && str[i]>='A'){
                sum+=((int)str[i]-38);
            }
        }
        if(!v[sum]){
            cout<<"It is a prime word."<<endl;
        }
        else{
            cout<<"It is not a prime word."<<endl;
        }
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