#include <iostream>
using namespace std;

#define MAX_COIN 100004
int coin[MAX_COIN] = {0, -1, 1, -1, 2, 1};

int n;

void input() {
    cin >> n;
}

void solution() {
    for (int i = 6; i <= n; i++) {
        if (!(i % 5)) coin[i] = i / 5;
        else {
            int five_coin = i / 5, remain_coin = i % 5;
            if (!(remain_coin % 2)) coin[i] = five_coin + remain_coin / 2;
            else coin[i] = five_coin - 1 + (remain_coin + 5) / 2;
        }
    }

    cout << coin[n] << '\n';
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