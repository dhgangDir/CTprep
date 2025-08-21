#include <iostream>
#include <utility>
using namespace std;

#define MAX_TEAM 14

pair<int, int> arr[MAX_TEAM] = {
    {0, 0},
    {12, 1600},
    {11, 894},
    {11, 1327},
    {10, 1311},
    {9, 1004},
    {9, 1178},
    {9, 1357},
    {8, 837},
    {7, 1055},
    {6, 556},
    {6, 773}
};

int n;

void input() {
    cin >> n;
}

void solution() {
    cout << arr[n].first << ' ' << arr[n].second << '\n';
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
