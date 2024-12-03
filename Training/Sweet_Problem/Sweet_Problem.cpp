#include <bits/stdc++.h>

using namespace std;

void solve() {
    int r,g,b;
    cin >> r >> g >> b;

    vector<int> colors = {r,g,b};
    sort(colors.begin(), colors.end());
    
    if(colors[2] <= (colors[0] + colors[1])) {
        cout << (r + g + b) / 2 << endl;
    } else {
        cout << (colors[0] + colors[1]) << endl;
    }
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}