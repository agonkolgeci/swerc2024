#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()

//--------CODE--------//

const ll INF = 1e18;
const ll MOD = 1e9 + 7;

void solve() {
    int w, l;
    cin >> w >> l;

    vector<int> k;

    int total = (w * l);
    int interior = (w - 2) * (l - 2);
    int exterior = total - interior;
    
    int max_a = min(w, l);
    for (int a = 1; a <= max_a; a++) {
        if(exterior % a == 0) {
            k.push_back(a);
        }
    }

    cout << k.size() << " ";
    for (int a : k) {
        cout << a << " ";
    }

    cout << endl;
} 

int main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }     
}