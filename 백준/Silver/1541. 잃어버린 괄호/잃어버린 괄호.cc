#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    vector<int> v;
    int num = 0, sum = 0;
    for (const auto& c : s) {
        if (c == '-') {
            sum += num;
            num = 0;
            v.push_back(sum);
            sum = 0;
        } else if (c == '+') {
            sum += num;
            num = 0;
        } else
            num = num * 10 + c - '0';
    }
    sum += num;
    v.push_back(sum);

    int ans = v[0];
    for (int i = 1; i < v.size(); ++i)
        ans -= v[i];

    cout << ans << "\n";

    return 0;
}