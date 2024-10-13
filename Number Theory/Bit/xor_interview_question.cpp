#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;
/***
 * Given an array of n integers. All Intergers
 * are present in event except one.
 * Find that one interger which has odd count in
 * O(N) time complexity and O(1) space complexity.
 * 
 * constraints
 * N<10^5
 * a[i]< 10^5
 * input:
 * 5
 * 1 1 2 1 1
 */

void solve(){
    int n;
    cin>>n;
    int num;
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>num;
        ans=ans^num;
    }
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int t; cin>>t; while(t--) solve();
    solve();
    return 0;
}