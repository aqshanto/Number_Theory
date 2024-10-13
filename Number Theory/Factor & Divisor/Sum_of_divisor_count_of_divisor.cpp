#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;

void solve(){
    int n;
    cin>>n;
    int cnt=0,sum=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            if(n/i==i){
                cout<<i<<endl;
                cnt++;
                sum+=i;
            }else{
                cnt+=2;
                cout<<i<<" "<<n/i<<endl;
                sum+=i;
                sum+=(n/i);
            }
        }
    }
    cout<<"count: "<<cnt<<" sum: "<<sum<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int t; cin>>t; while(t--) solve();
    solve();
    return 0;
}