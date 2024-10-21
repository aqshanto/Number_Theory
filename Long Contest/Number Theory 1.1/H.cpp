#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;

void solve(){
    int n;
    while(cin>>n && n!=0){
        vector<int>v;
        cout<<n<<" = ";
        if(n<0){
            cout<<"-1 x ";
            n*=-1;
        }
        for(int i=2;i<=sqrt(n)+1;i++){
            if(n%i==0){
                while(n%i==0){
                    v.push_back(i);
                    n/=i;
                }
            }
        }
        if(n!=1){
            v.push_back(n);
        }
        for(int i=0;i<v.size();i++){
            cout<<v[i];
            if(i!=v.size()-1){
                cout<<" x ";
            }
        }cout<<endl;
    }
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int t; cin>>t; while(t--) solve();
    solve();
    return 0;
}