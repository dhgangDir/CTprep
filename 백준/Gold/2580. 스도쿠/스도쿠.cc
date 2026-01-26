#include <bits/stdc++.h>
using namespace std;

const int MAX = 9;
int board[MAX][MAX];
vector<pair<int, int>> v;
bool is_used[MAX][MAX + 1], is_used1[MAX][MAX + 1], is_used2[MAX][MAX + 1];

void func(int depth) {
    if (depth == v.size()) {
        for (auto& a : board) {
            for (auto& i : a)
                cout << i << " ";
            cout << "\n";
        }
        exit(0);
    }

    for (int i = 1; i <= MAX; ++i) {
        if (is_used[v[depth].first][i] ||
            is_used1[v[depth].second][i] ||
            is_used2[v[depth].first / 3 * 3 + v[depth].second / 3][i])
            continue;

        is_used[v[depth].first][i] = true;
        is_used1[v[depth].second][i] = true;
        is_used2[v[depth].first / 3 * 3 + v[depth].second / 3][i] = true;

        board[v[depth].first][v[depth].second] = i;
        func(depth + 1);

        is_used[v[depth].first][i] = false;
        is_used1[v[depth].second][i] = false;
        is_used2[v[depth].first / 3 * 3 + v[depth].second / 3][i] = false;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 0; i < MAX; ++i)
        for (int j = 0; j < MAX; ++j) {
            cin >> board[i][j];
            if (board[i][j] == 0)
                v.push_back({i, j});
            else {
                is_used[i][board[i][j]] = true;
                is_used1[j][board[i][j]] = true;
                is_used2[i / 3 * 3 + j / 3][board[i][j]] = true;
            }
        }

    func(0);

    return 0;
}