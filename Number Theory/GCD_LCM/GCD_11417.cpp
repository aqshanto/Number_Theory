#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;

int GCD(int a,int b){
    if(b==0)return a;
    if(a<b)swap(a,b);
    int r=a%b;
    return GCD(b,r);
}

void solve(){
    int n;
    while(true){
        int G=0;
        cin>>n;
        if(n==0)break;
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                G+=GCD(i,j);
            }
        }
        cout<<G<<endl;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int t; cin>>t; while(t--) solve();
    solve();
    return 0;
}