#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;

void solve(){
    int l,h;
    cin>>l>>h;
    int cnt=0,maxv=INT_MIN,ele;
    for(int i=l;i<=h;i++){
        cnt=0;
        for(int j=1;j<=sqrt(i);j++){
            if((j*j)==i){
                cnt++;
            }else if(i%j==0){
                cnt+=2;
            }
        }
        if(maxv<cnt){
            ele=i;
            maxv=cnt;
        }
    }
    cout<<"Between "<<l<<" and "<<h<<", "<<ele<<" has a maximum of "<<maxv<<" divisors."<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t; while(t--) solve();
    // solve();
    return 0;
}