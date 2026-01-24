#include <bits/stdc++.h>
using namespace std;

int n, mx = INT_MIN, mn = INT_MAX;
vector<char> cv;
vector<int> v;
bool is_used[12];

void func(int tot, int depth) {
    if (depth == n) {
        mx = max(mx, tot);
        mn = min(mn, tot);
        return ;
    }
    for (int i = 0; i < cv.size(); ++i) {
        if (!is_used[i]) {
            is_used[i] = true;
            if (cv[i] == '+')
                func(tot + v[depth], depth + 1);
            else if (cv[i] == '-')
                func(tot - v[depth], depth + 1);
            else if (cv[i] == '*')
                func(tot * v[depth], depth + 1);
            else
                func(tot / v[depth], depth + 1);
            is_used[i] = false;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    v.resize(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    for (int i = 0; i < 4; ++i) {
        int tmp;
        cin >> tmp;
        while (tmp--) {
            if (i == 0)
                cv.push_back('+');
            else if (i == 1)
                cv.push_back('-');
            else if (i == 2)
                cv.push_back('*');
            else
                cv.push_back('/');
        }
    }

    func(v[0], 1);

    cout << mx << "\n" << mn << "\n";

    return 0;
}