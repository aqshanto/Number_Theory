#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;

void solve(){
    int a,b;
    cin>>a>>b;
    int multi=a*b;
    int i=1,x=0,y=0;
    while(true){
        if(multi%i==0){
            x=i;
            y=multi/i;
            if(__gcd(x,y)==a){
                cout<<x<<" "<<y<<endl;
                break;
            }
            i++;
        }else{
            i++;
            if(i>sqrt(multi)){
                cout<<-1<<endl;
                break;
            }
        }
        
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t; while(t--) solve();
    // solve();
    return 0;
}