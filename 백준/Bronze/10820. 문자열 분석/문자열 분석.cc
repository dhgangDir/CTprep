#include <iostream>
using namespace std;

void solution() {
    string str;
    while (getline(cin, str)) {
        int low_cnt, upper_cnt, num_cnt, blank_cnt;
        low_cnt = upper_cnt = num_cnt = blank_cnt = 0;
        for (const auto& c : str) {
            if (c >= 'a' && c <= 'z') low_cnt++;
            else if (c >= 'A' && c <= 'Z') upper_cnt++;
            else if (c >= '0' && c <= '9') num_cnt++;
            else blank_cnt++;
        }
        cout << low_cnt << ' ' << upper_cnt << ' ' 
                << num_cnt << ' ' << blank_cnt << '\n';
    }
}

void solve() {
    solution();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}