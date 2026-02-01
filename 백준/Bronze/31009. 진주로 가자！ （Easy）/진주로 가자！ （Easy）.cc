#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> v;
    int cmp;

    for (int i = 0; i < n; ++i) {
        string d;
        int c;
        cin >> d >> c;

        if (d != "jinju")
            v.push_back(c);
        else
            cmp = c;
    }

    sort(v.begin(), v.end());

    cout << cmp << "\n";
    cout << v.end() - upper_bound(v.begin(), v.end(), cmp) << "\n";

    return 0;
}