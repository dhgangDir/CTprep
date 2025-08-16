#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_LEN 54
int n;
string str[MAX_LEN];

void input() {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> str[i];
}

bool cmp(const string& a, const string& b) {
    if (a.size() != b.size()) 
        return (a.size() < b.size());
    else {
        int a_num = 0, b_num = 0;
        for (int i = 0; i < a.size(); i++) {
            if (a[i] >= '0' && a[i] <= '9') a_num += (a[i] - '0');
            if (b[i] >= '0' && b[i] <= '9') b_num += (b[i] - '0');
        }
        if (a_num != b_num) {
            if (a_num < b_num) return true;
            else return false;
        } else 
            return a < b;
    }
}

void solution() {
    sort(str, str + n, cmp);
    for (int i = 0; i < n; i++) cout << str[i] << '\n';
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