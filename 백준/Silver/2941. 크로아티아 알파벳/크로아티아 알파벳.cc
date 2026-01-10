#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    vector<string> cro = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

    for (auto a : cro) {
        while (true) {
            int idx = s.find(a);

            if (idx == string::npos) break;
            s.replace(idx, a.size(), "#");
        }
    }

    cout << s.size() << "\n";

    return 0;
}