#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
int N=1e8;
vector<bool>v(N+1,false);
vector<int>p;

void seive(){
    for(int i=4;i<=N;i+=2){
        v[i]=true;
    }
    for(int i=3;i*i<=N;i+=2){
        if(!v[i]){
            for(int j=i*i;j<=N;j+=(i+i)){
                v[j]=true;
            }
        }
    }
    p.push_back(2);
    for(int i=3;i<=N;i+=2){
        if(!v[i]){
            p.push_back(i);
            // cout<<i<<endl;
        }
    }
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    seive();
    cout<<p.size()<<endl;
    int t=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        printf("%lld\n",p[n-1]);
    }
    return 0;
}