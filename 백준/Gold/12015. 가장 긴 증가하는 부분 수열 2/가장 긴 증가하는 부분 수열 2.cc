#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;

        if (v.empty() || v.back() < num)
            v.push_back(num);
        else {
            int idx = lower_bound(v.begin(), v.end(), num) - v.begin();
            v[idx] = num;
        }
    }

    cout << v.size() << "\n";

    return 0;
}