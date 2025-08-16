#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_LEN 100004
typedef long long ll;

ll arr[MAX_LEN];
int n;

void input() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];
}

void solution() {
    sort(arr, arr+n);

    ll cmp_num = arr[0], cnt = 1, max_cnt = 0, max_num;
    for (int i = 1; i < n; i++) {
        if (cmp_num != arr[i]) {
            if (max_cnt < cnt) {
                max_cnt = max(max_cnt, cnt);
                max_num = cmp_num;
            }
            cmp_num = arr[i];
            cnt = 1;
        } else cnt++;
    }
    if (max_cnt < cnt) {
        max_cnt = max(max_cnt, cnt);
        max_num = cmp_num;
    }
    cout << max_num << '\n';
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
