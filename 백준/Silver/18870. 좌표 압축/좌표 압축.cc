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

    vector<int> cpv = v;
    sort(cpv.begin(), cpv.end());
    cpv.erase(unique(cpv.begin(), cpv.end()), cpv.end());

    for (int i = 0; i < n; ++i) {
        int idx = lower_bound(cpv.begin(), cpv.end(), v[i]) - cpv.begin();
        cout << idx << " ";
    }
    cout << "\n";

    return 0;
}