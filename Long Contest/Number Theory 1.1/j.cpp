#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;

void solve(){
    int n;
    while(cin>>n && n){
        if(n<0)n=n*-1;
        int m=n;
        set<int>factors;
        for(int i=2;i<sqrt(n)+1;i++){
            while(n%i==0){
                n/=i;
                factors.insert(i);
            }
        }
        if(n!=1)factors.insert(n);
        if(factors.size()>=2){
            auto it=factors.end();
            --it;
            if(*it==m)cout<<-1<<endl;
            else cout<<*it<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}