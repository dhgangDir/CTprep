#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    priority_queue<pii, vector<pii>, greater<pii>> pq;

    int n;
    cin >> n;

    while (n--) {
        int num;
        cin >> num;

        if (num == 0) {
            if (!pq.empty()) {
                cout << pq.top().second << "\n";
                pq.pop();
            } else
                cout << 0 << "\n";
        } else
            pq.push({abs(num), num});
    }


    return 0;
}