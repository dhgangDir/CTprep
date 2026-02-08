#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b) {
    if (a.size() != b.size())
        return a.size() < b.size();
    return a < b;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    vector<string> v;
    while (t--) {
        string s;
        cin >> s;

        int st = -1, en = -1;
        bool flag = false;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] >= '0' && s[i] <= '9') {
                if (flag)
                    en++;
                else {
                    flag = true;
                    st = en = i;
                }
            } else {
                if (st != -1 && en != -1) {
                    while (en - st + 1 > 1 && s[st] == '0')
                        st++;
                    v.push_back(s.substr(st, en - st + 1));
                    st = en = -1;
                    flag = false;
                }
            }
        }
        if (st != -1 && en != -1) {
            while (en - st + 1 > 1 && s[st] == '0')
                st++;
            v.push_back(s.substr(st, en - st + 1));
        }
    }

    sort(v.begin(), v.end(), cmp);

    for (const auto& num : v)
        cout << num << "\n";

    return 0;
}