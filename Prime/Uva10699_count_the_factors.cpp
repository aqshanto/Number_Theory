#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;
int N=1e7;

vector<bool>v(N);
vector<int>newv;
void sieve(){
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
    for(int i=2;i<=N;i++){
        if(!v[i]){
            newv.push_back(i);
        }
    }
}

void solve(){
    while(true){
        int n;
        cin>>n;
        if(n==0)break;
        int original=n;
        set<int>st;
        for(int i=0;i<newv.size();i++){
            while(n%newv[i]==0){
                st.insert(newv[i]);
                n/=newv[i];
            }
        }
        if(n>1)st.insert(n);
        cout<<original<<" : "<<st.size()<<endl;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    sieve();
    solve();
    return 0;
}