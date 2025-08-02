#include <iostream>
#include <string>
using namespace std;

string oct_num[8] = {"000", "001", "010", "011", "100", "101", "110", "111"};
string converted_num;

void input() {
    cin >> converted_num;
}

void solution() {
    for (int i = 0; i < converted_num.size(); i++) {
        int temp = converted_num[i] - '0';
        if (i == 0) cout << stoi(oct_num[temp]);
        else cout << oct_num[temp];
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