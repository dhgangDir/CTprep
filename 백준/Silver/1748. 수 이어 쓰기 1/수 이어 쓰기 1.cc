#include <iostream>
using namespace std;

typedef long long ll;

int n;

void input() {
    cin >> n;
}

void solution() {
    ll tmp = 0, cnt = 0, idx = 1;
    while (true) {
        if (n < tmp * 10 + 9){
            cnt = cnt + (n - tmp) * idx;
            break;
        }
        ll before = tmp;
        tmp = tmp * 10 + 9;
        cnt = cnt + (tmp - before) * idx;
        idx++;
    }
    cout << cnt << '\n';
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