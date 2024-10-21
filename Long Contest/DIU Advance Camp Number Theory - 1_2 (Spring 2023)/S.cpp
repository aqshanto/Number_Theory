#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;
int N=1000000;
vector<bool>v(N+10,false);

void seive(){
    v[0]=true;
    v[1]=true;
    for(int i=4;i<=N;i+=2){
        v[i]=true;
    }
    int x=sqrt(N)+1;
    for(int i=3;i<=x;i+=2){
        if(!v[i]){
            for(int j=i*i;j<=N;j+=(i+i)){
                v[j]=true;
            }
        }
    }
}
void solve(){
    int n=1;
    while(cin>>n && n!=0){
        bool flag=false;
        cout<<n<<":"<<endl;
        for(int i=0;i<=n/2;i++){
            int k=n-i;
            if(v[i]==false && v[k]==false){
                flag=true;
                cout<<i <<"+"<<k<<endl;
                break;
            }
        }
        if(!flag)cout<<"NO WAY!"<<endl;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    seive();
    // int t; cin>>t; while(t--) solve();
    solve();
    return 0;
}