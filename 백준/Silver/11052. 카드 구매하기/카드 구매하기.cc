#include <iostream>
using namespace std;

#define MAX_CARD 1000
typedef long long ll;

ll dp[MAX_CARD], n;

void input() {
    cin >> n;
    for (int i = 1; i <= n; i++) 
        cin >> dp[i];
}

void solution() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i; j++) 
            dp[i] = max(dp[i], dp[i - j] + dp[j]);
    }

    cout << dp[n] << '\n';
}

void solve() {
    input();
    solution();
}

int main() {
    input();
    solution();
    return 0;
}
