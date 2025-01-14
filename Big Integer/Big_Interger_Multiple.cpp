#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve() {
    string s1, s2;
    cin >> s1 >> s2;
    int n1 = s1.size(), n2 = s2.size();
    vector<int> v(n1 + n2, 0);
    for (int i = n1 - 1; i >= 0; i--) {
        for (int j = n2 - 1; j >= 0; j--) {
            int product = (s1[i] - '0') * (s2[j] - '0');
            int sum = product + v[i + j + 1];
            v[i + j + 1] = sum % 10;
            v[i + j] += sum / 10;
        }
    }
    string str = "";
    for (int i = 0; i < n1 + n2; i++) {
        if (str.size() == 0 && v[i] == 0) {
        } else {
            str += (char)(v[i] + '0');
        }
    }
    cout << str << endl;
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