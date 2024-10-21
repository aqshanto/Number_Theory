#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;

void solve(){
    int num;
    while(1){
        cin>>num;
        int n=num;
        set<int>v;
        if(num==0){
            break;
        }
        for(int i=2;i<=sqrt(num);i++){
            while(num%i==0){
                num/=i;
                v.insert(i);
            }
        }
        if(num>1){
            v.insert(num);
        }
        cout<<n<<" : "<<v.size()<<endl;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int t; cin>>t; while(t--) solve();
    solve();
    return 0;
}