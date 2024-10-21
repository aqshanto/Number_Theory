#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;
ll N=1e6+1;

void solve(){
    vector<bool>v(N,true);
    for(int i=2;i<=sqrt(N);i++){
        if(v[i]){
            for(int j=i*i;j<=N;j+=i){
                v[j]=false;
            }
        }
    }
    set<long long >st;
    for(int i=2;i<=N;i++){
        if(v[i]){
            st.insert((long long)i*i);
        }
    }
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(st.find(n)!=st.end()){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int t; cin>>t; while(t--) solve();
    solve();
    return 0;
}