#include <bits/stdc++.h>
using namespace std;

deque<pair<int, int>> dq;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        int paper;
        cin >> paper;
        dq.push_back({i, paper});
    }

    while (!dq.empty()) {
        int target = dq.front().second;
        cout << dq.front().first << " ";
        dq.pop_front();

        if (target > 0) {
            for (int i = 0; i < target - 1; ++i) {
                dq.push_back(dq.front());
                dq.pop_front();
            }
        } else {
            for (int i = 0; i < abs(target); ++i) {
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
    }
    cout << "\n";

    return 0;
}