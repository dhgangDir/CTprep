#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_LEN 20004

int n, m, t;
int aorganism[MAX_LEN], borganism[MAX_LEN];

void input_arr(int arr[], int size) {
    for (int i = 0; i < size; i++) 
        cin >> arr[i];
}

void input() {
    cin >> t;
}

bool cmp(const int& a, const int& b) {
    return a > b;
}

void solution() {
    while (t--) {
        cin >> n >> m;
        input_arr(aorganism, n);
        input_arr(borganism, m);
        sort(aorganism, aorganism + n, cmp);
        sort(borganism, borganism + m, cmp);
        int aidx = 0, bidx = 0, cnt = 0;
        for (int i = 0; i < n + m; i++) {
            if (aidx == n) break;
            else if (bidx == m) break;
            else if (aorganism[aidx] <= borganism[bidx]) bidx++;
            else if (aorganism[aidx] > borganism[bidx]) {
                cnt += (m - bidx);
                aidx++;
            }
        }
        cout << cnt << '\n';
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