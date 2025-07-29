#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<pair<int, int>> coord;
int n;

void input() {
    int a, b;
    cin >> n;
    while (n--) {
        cin >> a >> b;
        coord.push_back({a, b});
    }
}

bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.first == b.first) 
        return a.second < b.second;
    else
        return a.first < b.first;
}

void solution() {
    sort(coord.begin(), coord.end());
    for (auto ab : coord) 
        cout << ab.first << ' ' << ab.second << '\n';
}

void solve() {
    input();
    solution();
}

int main() {
    solve();
    return 0;
}