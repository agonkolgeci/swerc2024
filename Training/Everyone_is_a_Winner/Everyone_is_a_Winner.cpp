#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define all(x) x.begin(), x.end()

void solve() {
    int n;
    cin >> n;

    set<int> sequences;
    int s = sqrtl(n);
    for(int i = 0; i <= s; i++) {
        sequences.insert(i);
    }

    for(int i = 1; i <= s; i++) {
        sequences.insert(n / i);
    }

    cout << sequences.size() << endl;
    for(int sequence : sequences) {
        cout << sequence << " ";
    }
    
    cout << endl;
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);


    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}