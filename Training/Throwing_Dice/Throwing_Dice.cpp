#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
    int M, N;

    cin >> M >> N;

    vector<int> A_M(M);
    vector<int> B_N(N);
    for(int i = 0; i < M; i++) {
        cin >> A_M[i];
    }

    for(int i = 0; i < N; i++) {
        cin >> B_N[i];
    }

    int sum_M = M;
    for(int i = 0; i < M; i++) {
        sum_M += A_M[i];
    }

    int sum_N = N;
    for(int i = 0; i < N; i++) {
        sum_N += B_N[i];
    }

    if(sum_M > sum_N) {
        cout << "ALICE" << endl;
    } else if(sum_M < sum_N) {
        cout << "BOB" << endl;
    } else if(sum_M == sum_N) {
        cout << "TIED" << endl;
    }
}