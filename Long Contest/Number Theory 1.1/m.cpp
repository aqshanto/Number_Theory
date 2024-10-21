#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;
int N=10;
vector<set<int>>v(N+1);
map<int,vector<int>>mp;
vector<int>ans;

void seive(){
    for(int i=1;i*i<=N;i++){
        for(int j=1;j<=N;j++){
            if(j%i==0){
                v[j].insert(i);
                v[j].insert(j/i);
            }
        }
    }
    for(int i=1;i<=N;i++){
        mp[v[i].size()].push_back(i);
    }
    for(auto it:mp){
        cout<<it.first<<endl;
        auto i=it.second;
        auto j=i.end();
        --j;
        for(j=j;j!=i.begin();--j){
            ans.push_back(*j);
            cout<<"value  "<<*j<<endl;
        }
    }
    
}

void solve(){
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    // int t;
    // cin>>t;
    // for(int i=1;i<=t;i++){
    //     int n;
    //     cin>>n;

    // }
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    seive();
    solve();
    return 0;
}