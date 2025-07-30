#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string str;
vector<string> suffix;

void input() {
    cin >> str;
}

void solution() {
    for (int i = 0; i < str.size(); i++) {
        suffix.push_back(str.substr(i));
    }
    sort(suffix.begin(), suffix.end());

    for (const auto& s : suffix) 
        cout << s << '\n';
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