#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        int top = n, bottom = n;
        while (top != 0) {
            if(a[top - 1] == b[bottom - 1]) {
                top--;
                bottom--;
            } else {
                top--;
            }
        }

        cout << bottom << endl;
    }
}
