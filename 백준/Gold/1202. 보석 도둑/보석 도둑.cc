#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    vector<pii> gem(n);
    for (int i = 0; i < n; ++i)
        cin >> gem[i].first >> gem[i].second;

    vector<int> bag(k);
    for (int i = 0; i < k; ++i)
        cin >> bag[i];

    sort(gem.begin(), gem.end());
    sort(bag.begin(), bag.end());

    priority_queue<int> pq;
    long long ans = 0;
    int i = 0;
    for (const auto& c : bag) {
        while (i < n && gem[i].first <= c) {
            pq.push(gem[i].second);
            ++i;
        }

        if (!pq.empty()) {
            ans += pq.top();
            pq.pop();
        }
    }

    cout << ans << "\n";

    return 0;
}