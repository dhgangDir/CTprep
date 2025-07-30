#include <iostream>
using namespace std;

#define MAX_LEN 10004
#define MAX_NUM 10000

int arr[MAX_LEN];

void solution() {
    for (int i = 1; i <= MAX_NUM; i++) {
        int sum = i;
        for (int tmp = i; tmp > 0; tmp/=10) {
            sum = sum + (tmp % 10);
        }
        if (sum <= MAX_NUM) arr[sum] = 1;
    }
    for (int i = 1; i <= MAX_NUM; i++) 
        if (!arr[i]) cout << i << '\n';
}

void solve() {
    solution();
}

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    solve();
    return 0;
}