#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;

void solve(){
    // and Operator
    // this will and the bit indiviually (&)
    int a=78,b=45;
    int ans=a&b;
    cout<<ans<<endl;

    //or operator
    // this will or the bit indiviually (|)
    ans = a|b;
    cout<<ans<<endl;

    // not operator
    // this will return oposite of the bit
    // if the bit is 1 then return 0 or if bit is 0 then it will return 1;
    ans=~a;
    cout<<ans<<endl;
    ans=~b;
    cout<<ans<<endl;

    // xor operator
    // this will xor the bit indiviually (^)
    // if both bits of a or b is 1 or 0 then it will print 0 otherwise 1;
    ans=a^b;
    cout<<ans<<endl;

    // left shift
    // eta bit take n bar left e soriye dey
    ans=a<<1;
    cout<<ans<<endl;

    // right shift
    // eta bit take n ghor right e soriye dey
    ans=b>>2;
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int t; cin>>t; while(t--) solve();
    solve();
    return 0;
}