#include <bits/stdc++.h>
using namespace std;

const int MAX = 3;
int X[] = {0, -1, 0, 1}, Y[] = {-1, 0, 1, 0};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        vector<string> sv(MAX);
        for (int i = 0; i < MAX; ++i)
            cin >> sv[i];

        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; ++i)
            cin >> v[i];

        vector<vector<bool>> bv2(MAX, vector<bool>(MAX, false));
        queue<pair<int, int>> q;
        vector<int> rlt;
        for (int i = 0; i < MAX; ++i) {
            for (int j = 0; j < MAX; ++j) {
                if (sv[i][j] == 'O' && bv2[i][j] == false) {
                    int cnt = 1;
                    bv2[i][j] = true;
                    q.push({i, j});

                    while (!q.empty()) {
                        int x1 = q.front().first;
                        int y1 = q.front().second;
                        q.pop();
                        for (int k = 0; k < 4; ++k) {
                            int nx = x1 + X[k];
                            int ny = y1 + Y[k];
                            if (nx < 0 || ny < 0 || nx >= MAX || ny >= MAX) continue;
                            if (bv2[nx][ny] || sv[nx][ny] != 'O') continue;
                            cnt++;
                            bv2[nx][ny] = true;
                            q.push({nx, ny});
                        }
                    }

                    rlt.push_back(cnt);
                }
            }
        }
        if (rlt.size() != v.size())
            cout << 0 << "\n";
        else {
            bool flag = true;
            sort(rlt.begin(), rlt.end());
            for (int i = 0; i < rlt.size(); ++i)
                if (rlt[i] != v[i])
                    flag = false;
            if (flag)
                cout << 1 << "\n";
            else
                cout << 0 << "\n";
        }
    }
    return 0;
}