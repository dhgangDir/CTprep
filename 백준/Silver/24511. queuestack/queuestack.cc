#include <bits/stdc++.h>
using namespace std;

vector<int> v;
deque<int> dq;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    v.resize(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    for (auto i : v) {
        int num;
        cin >> num;
        if (!i) dq.push_back(num);
    }
    int dq_size = dq.size();

    int m;
    cin >> m;

    while (m--) {
        int num;
        cin >> num;

        dq.push_front(num);
        if (dq.size() > dq_size) {
            cout << dq.back() << " ";
            dq.pop_back();
        }
    }
    cout << "\n";

    return 0;
}