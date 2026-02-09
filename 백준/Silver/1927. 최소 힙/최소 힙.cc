#include <bits/stdc++.h>
using namespace std;

priority_queue<int, vector<int>, greater<int>> pq;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    while (n--) {
        int num;
        cin >> num;

        if (num == 0) {
            if (!pq.empty()) {
                cout << pq.top() << "\n";
                pq.pop();
            } else
                cout << 0 << "\n";
        } else
            pq.push(num);
    }

    return 0;
}