#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;

void PrintBinary(int num){
    for(int i=10;i>=0;i--){
        cout<<((num>>i)&1);
    }
    cout<<endl;
}

/*
If the bit is 1 then it is set
otherwise Unset
*/
void solve(){
    int n;
    int bit;
    cin>>n>>bit;
    PrintBinary(n);
    if(n&(1<<bit)==0){
        cout<<bit<<" bit set"<<endl;
    }else{
        cout<<"Unset"<<endl;
    }

    //set bit
    int set=1<<bit|n;
    PrintBinary(set);

    //unset bit
    int unset=n&(~(1<<0));
    PrintBinary(unset);

    //Toggle (mean 1 to 0 / 0 to 1)
    int toggle=(n^(1<<3));
    PrintBinary(toggle);

    //bit count (mean how many set bit are there in the num)
    int cnt=0;
    for(int i=31;i>=0;i--){
        if((n & (1<<i))!=0){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    //builtin Function
    cout<<__builtin_popcount(n)<<endl; // for int
    cout<<__builtin_popcountll(n)<<endl; // for long long
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int t; cin>>t; while(t--) solve();
    solve();
    return 0;
}