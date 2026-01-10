#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string nums[] = {
        "", "", "ABC", "DEF", "GHI",
        "JKL", "MNO", "PQRS", "TUV", "WXYZ"
    };

    string s;
    cin >> s;
    
    int ans = 0;
    for (auto c : s)
        for (int i = 2; i < sizeof(nums)/sizeof(string); i++)
            if (nums[i].find(c) != string::npos) ans += i;

    cout << ans + s.size() << "\n";

    return 0;
}