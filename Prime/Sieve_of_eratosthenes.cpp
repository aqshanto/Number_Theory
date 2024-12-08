#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
double pi = 3.141592653589793238462643383279;
int n = 1e7;
vector<bool> v(n, true);

void sieve_of_eratosthenes() {
    v[0] = false;
    v[1] = false;
    for (int i = 4; i <= n; i += 2) {
        v[i] = false;
    }
    int x = sqrt(n) + 1;
    for (int i = 3; i <= x; i += 2) {
        if (v[i]) {
            for (int j = i * i; j <= n; j += (i + i)) {
                v[j] = false;
            }
        }
    }
}

void sieve_of_eratosthenes() {
    v[0] = false;
    v[1] = false;
    int x = sqrt(n) + 1;
    for (int i = 2; i <= x; i++) {
        if (v[i]) {
            for (int j = i * i; j <= n; j += (i + i)) {
                v[j] = false;
            }
        }
    }
}

void solve() {
    sieve_of_eratosthenes();
    int cnt = 0;
    int N = 1e3;
    for (int i = 1; i <= N; i++) {
        if (v[i]) {
            cnt++;
            cout << i << " ";
            if (cnt % 5 == 0) {
                cout << endl;
            }
        }
    }
    cout << endl;
    cout << cnt << " " << N << endl;
    cout << fixed << setprecision(5) << (double)(((double)cnt * 100) / N) << "%" << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int t; cin>>t; while(t--) solve();
    solve();
    return 0;
}
