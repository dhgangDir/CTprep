#include <bits/stdc++.h>
using namespace std;

const int MAX = 10;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    while (getline(cin, s));

    for (int i = 1; i <= MAX; ++i)
        for (int j = 1; j <= MAX; ++j)
            for (int k = 1; k <= MAX; ++k)
                for (int l = 1; l <= MAX; ++l)
                    cout << -1 << "\n";

    return 0;
}