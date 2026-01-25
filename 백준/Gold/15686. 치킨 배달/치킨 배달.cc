#include <bits/stdc++.h>
using namespace std;

int n, m, ans = INT_MAX;
vector<pair<int, int>> chicken, house;
bool is_used[14];

void func(int start, int depth) {
    if (depth == m) {
        vector<int> v(house.size(), INT_MAX);
        for (int i = 0; i < chicken.size(); ++i)
            if (is_used[i])
                for (int j = 0; j < house.size(); ++j)
                    v[j] = min(v[j], abs(chicken[i].first - house[j].first) + abs(chicken[i].second - house[j].second));
        int sum = 0;
        for (auto& i : v)
            sum += i;
        ans = min(ans, sum);
        return;
    }

    for (int i = start; i < chicken.size(); ++i) {
        is_used[i] = true;
        func(i + 1, depth + 1);
        is_used[i] = false;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j) {
            int coord;
            cin >> coord;
            if (coord == 1)
                house.push_back({i, j});
            if (coord == 2)
                chicken.push_back({i, j});
        }

    func (0, 0);

    cout << ans << "\n";

    return 0;
}