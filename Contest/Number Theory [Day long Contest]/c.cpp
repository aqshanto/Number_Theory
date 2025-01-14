#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi = 3.141592653589793238462643383279;
int N = 99998953;
vector<bool> v(N, false);
vector<int> prime;

void seive() {
    v[0] = true;
    v[1] = true;
    for (int i = 4; i <= N; i += 2) {
        v[i] = true;
    }
    for (int i = 3; i * i <= N; i += 2) {
        if (!v[i]) {
            for (int j = i * i; j <= N; j += (i + i)) {
                v[j] = true;
            }
        }
    }
    prime.push_back(2);
    for (int i = 1; i <= N; i += 2) {
        if (!v[i]) prime.push_back(i);
    }
}

void solve() {
    for (int i = 0; i < prime.size(); i += 100) {
        cout << prime[i] << endl;
    }
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin>>t;
    seive();
    while (t--) {
        solve();
    }
    return 0;
}