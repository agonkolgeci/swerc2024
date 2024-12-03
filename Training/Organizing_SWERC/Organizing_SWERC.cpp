#include <bits/stdc++.h>

using namespace std;

#define int long long
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()

//--------CODE--------//

const int INF = 1e18;
const int MOD = 1e9 + 7;

#define TOTAL_PROBLEMS 10

void solve() {
    int n;
    cin >> n;

    map<int, int> db;
    for (int i = 0; i < n; i++) {
        int b;
        int d;

        cin >> b >> d;

        if (db[d] < b) {
            db[d] = b;
        }
    }

    if (db.size() < TOTAL_PROBLEMS) {
        cout << "MOREPROBLEMS" << endl;
    } else {
        int total = 0;
        for (const auto &[d, b] : db) {
            total += b;
        }

        cout << total << endl;
    }
}

signed main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
