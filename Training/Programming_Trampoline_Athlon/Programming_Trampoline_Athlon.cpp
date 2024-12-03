#include <bits/stdc++.h>

using namespace std;

#define TRAMPOLINE_EXERCISES 6
#define MAX_MEDALS 1000

bool comp(pair<string, int> a, pair<string, int> b) {
    return a.second > b.second;
}

int main() {
    ios_base::sync_with_stdio(0);
    
    int N;
    cin >> N;

    vector<pair<string, int>> teams(N);
    for(int i = 0; i < N; i++) {
        string name;
        cin >> name;

        int pscore;
        cin >> pscore;

        vector<int> tscores(TRAMPOLINE_EXERCISES);
        for(int j = 0; j < TRAMPOLINE_EXERCISES; j++) {
            cin >> tscores[j];
        }

        sort(tscores.begin(), tscores.end());

        int tscore = 0;
        for(int j = 1; j < TRAMPOLINE_EXERCISES-1; j++) {
            tscore += tscores[j];
        }

        int score = pscore*10 + tscore;

        teams.push_back({name, score});
    }

    sort(teams.begin(), teams.end(), comp);

    int last_score;
    for(int i = 0; i < min(N, MAX_MEDALS); i++) {
        pair<string, int> team = teams[i];

        if(i >= 3) {
            if(last_score != team.second) {
                break;
            }
        }

        last_score = team.second;
        
        cout << team.first << " " << team.second << endl; 
    }
}