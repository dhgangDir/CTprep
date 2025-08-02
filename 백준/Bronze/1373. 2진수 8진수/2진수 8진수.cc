#include <iostream>
using namespace std;

string bin_num;

void input() {
    cin >> bin_num;
}

void solution() {
    while (bin_num.size() % 3 != 0) {
        bin_num = '0' + bin_num;
    }

    for (int i = 0; i < bin_num.size(); i += 3) {
        int num = (bin_num[i] - '0') * 4 + (bin_num[i + 1] - '0') * 2 
                    + (bin_num[i + 2] - '0') * 1;
        cout << num;
    }
    cout << '\n';
}

void solve() {
    input();
    solution();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}