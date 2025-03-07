#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi = 3.141592653589793238462643383279;

void solve() {
    int n;
    while (cin >> n) {
        if (n == 1) {
            cout << 1 << endl;
        } else {
            cout << 1;
            for (int i = 2; i <= sqrt(n); i++) {
                while (n % i == 0) {
                    cout << " x " << i;
                    n /= i;
                }
            }
            if (n != 1)
                cout << " x " << n << endl;
            else {
                cout << endl;
            }
        }
    }
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