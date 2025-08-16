#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_LEN 20004

int n;
string word[MAX_LEN];

void input() {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> word[i];
}

bool cmp(const string& a, const string& b) {
    if (a.size() != b.size()) return a.size() < b.size();
    else return a < b;
}

void solution() {
    sort(word, word + n, cmp);
    string cmp_str = word[0];
    cout << word[0] << '\n';
    for (int i = 0; i < n; i++) {
        if (cmp_str != word[i]) {
            cout << word[i] << '\n';
            cmp_str = word[i];
        }
    }
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