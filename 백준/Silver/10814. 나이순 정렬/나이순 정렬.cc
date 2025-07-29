#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, string>> names;
int n;

void input() {
    int num;
    string name;
    cin >> n;
    while(n--) {
        cin >> num >> name;
        names.push_back({num, name});
    }
}

bool cmp(pair<int, string> a, pair<int, string> b) {
    return a.first < b.first;
}

void solution() {
    stable_sort(names.begin(), names.end(), cmp);
    for (const auto& p : names)
        cout << p.first << ' ' << p.second << '\n';
}

void solve() {
    input();
    solution();
}

int main() {
    solve();
    return 0;
}