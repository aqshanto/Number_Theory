#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;
int N=1e7;
vector<bool>v(N,false);

void sieve(){
    v[0]=true;
    v[1]=true;
    for(int i=4;i<=N;i+=2){
        v[i]=true;
    }
    int x=sqrt(N)+1;
    for(int i=3;i<=x;i+=2){
        if(!v[i]){
            for(int j=(i*i);j<=N;j+=(i+i)){
                v[j]=true;
            }
        }
    }
}

void solve(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        bool flag=false;
        string str;
        map<char,int>mp;
        cin>>str;
        int n=str.size();
        for(int i=0;i<n;i++){
            mp[str[i]]++;
        }
        cout<<"Case "<<i<<": ";
        for(auto it:mp){
            if(!v[it.second]){
                flag=true;
                cout<<it.first;
            }
        }
        if(flag)
            cout<<endl;
        if(!flag)
            cout<<"empty"<<endl;
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