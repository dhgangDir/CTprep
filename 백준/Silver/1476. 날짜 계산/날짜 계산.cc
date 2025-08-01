#include <iostream>
using namespace std;

int E, S, M;

void input() {
    cin >> E >> S >> M;
}

void solution() {
    int cnt = 0;

    while (true) {
        if (((cnt % 15) + 1) == E && 
            ((cnt % 28) + 1) == S && 
            ((cnt % 19) + 1) == M) {
            break;
        }
        cnt++;
        
    }

    cout << cnt + 1 << '\n';
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