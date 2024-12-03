#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()

//--------CODE--------//

const ll INF = 1e18;
const ll MOD = 1e9 + 7;

const vector<string> patterns = {"AA", "BB", "CC", "ABAB", "BCBC"};

// NOT FINISHED


bool can_transform(string s1, string s2) {
    if (s1 == s2) {
        return true;
    }

    if (s1.length() > s2.length()) {
        return false;
    }
}

bool check(string a, string b) {
    while (a.length() <= b.length()) {
        if (a == b) {
            return true;
        }

        for(string pattern : patterns) {
            if(b.find(a + pattern) == 0) {
                a += pattern;
            }
        }
    }
    
    return false;
}

void solve() {
    string weasel;
    string basilik;
    cin >> weasel >> basilik;

    
} 

int main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }     
}