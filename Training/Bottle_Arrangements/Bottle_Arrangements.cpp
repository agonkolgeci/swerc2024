#include <bits/stdc++.h>

using namespace std;

#define int long long
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()

//--------CODE--------//

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve() {
    int n;
    int m;

    cin >> n >> m;

    vector<int> r(m);
    vector<int> w(m);
    for (int i = 0; i < m; i++) {
        cin >> r[i] >> w[i];
    }

    int r_max = 0;
    int w_max = 0;
    for (int i = 0; i < m; i++) {
        r_max = max(r_max, r[i]);
        w_max = max(w_max, w[i]);
    }

    int total = r_max + w_max;
    if (total > n) {
        cout << "IMPOSSIBLE" << endl;
    } else {
        string arrangement(n, 'W');
        for (int i = 0; i < r_max; ++i) {
            arrangement[i] = 'R';
        }

        cout << arrangement << endl;
    }
}

signed main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
