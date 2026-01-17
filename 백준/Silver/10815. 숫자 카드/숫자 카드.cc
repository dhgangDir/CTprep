#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    v.resize(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    sort(v.begin(), v.end());

    int m;
    cin >> m;
    while (m--) {
        int target;
        cin >> target;
        cout << binary_search(v.begin(), v.end(), target) << " ";
    }
    cout << "\n";

    return 0;
}