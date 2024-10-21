#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;

int divisor_count(int num){
    map<int,int>factors;
    for(int i=2;i<=sqrt(num)+1;i++){
        while(num%i==0){
            num/=i;
            factors[i]++;
        }
    }
    if(num!=1)factors[num]++;
    int msum=1,sum=0;
    for(auto it:factors){
        msum*=(it.second+1);
    }
    return msum;
}

int divisor_sum(int num){
    map<int,int>factors;
    int sum=0;
    for(int i=1;i<=sqrt(num);i++){
        if(num%i==0){
            sum+=i;
            if(i!=(num/i)) sum+=(num/i);
        }
    }
    return sum;
}

void solve(){
    int n;
    cin>>n;
    while(n--){
        int a,b,k;
        cin>>a>>b>>k;
        int sum=0,divi_sum=0;
        for(int i=a;i<=b;i++){
            if(i%k==0){
                sum+=divisor_count(i);
                divi_sum+=divisor_sum(i);
            }
        }
        cout<<sum<<" "<<divi_sum<<endl;
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