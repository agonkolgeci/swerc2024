#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define WALK_TIME 120
#define DAY_TIME 1440

// calc walks between two times
int walks(int start, int end) {
    return (end - start) / WALK_TIME;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; // tests
    cin >> t;

    while(t--) {
        int n; // messages

        cin >> n;

        vector<int> times(n); // minutes
        for(int i = 0; i < n; ++i) {
            cin >> times[i];
        }

        int w = 0;
        for(int i = 0; i < n - 1; ++i) {
            w += walks(times[i], times[i + 1]);
        }

        w += walks(0, times[0]); // add walks between 0 and first message
        w += walks(times[n - 1], DAY_TIME); // add walks between last message and day time

        cout << (w >= 2 ? "YES" : "NO") << endl;
    }
}