#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_LEN 1000004
typedef long long ll;
ll arr[MAX_LEN];
int n;

void input() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        ll num;
        cin >> num;
        ll rvsnum = 0;
        while (num) {
            rvsnum = rvsnum * 10 + (num % 10);
            num /= 10;
        }
        arr[i] = rvsnum;
    }    
}

void solution() {
    sort(arr, arr + n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << '\n';
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