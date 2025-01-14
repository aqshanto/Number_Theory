#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi = 3.141592653589793238462643383279;

string k(string n1, string n2) {
    int x = stoll(n1), y = stoll(n2);
    if (x < 10 || y < 10) {
        return to_string(x * y);
    } else {
        int n = max(n1.size(), n2.size());
        int half = n / 2;
        int a = x / (10 * half);
    }
}

void solve() {
    string n1, n2;
    cin >> n1 >> n2;
    cout << k(n1, n2) << endl;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}