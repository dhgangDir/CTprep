#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int m;
        cin >> m;

        cout << (m + 1) / 2 << "\n";

        priority_queue<int, vector<int>, greater<int>> big_s;
        priority_queue<int> sm_b;
        int mid, cnt = 1;
        cin >> mid;
        cout << mid << " ";
        for (int i = 0; i < m - 1; ++i) {
            int num;
            cin >> num;
            if (num < mid)
                sm_b.push(num);
            else
                big_s.push(num);

            if (i % 2) {
                if (sm_b.size() > big_s.size()) {
                    big_s.push(mid);
                    mid = sm_b.top();
                    sm_b.pop();
                } else if (sm_b.size() < big_s.size()){
                    sm_b.push(mid);
                    mid = big_s.top();
                    big_s.pop();
                }
                cout << mid << " ";
                cnt++;
                if (cnt % 10 == 0)
                    cout << "\n";
            }
        }
        cout << "\n";
    }

    return 0;
}