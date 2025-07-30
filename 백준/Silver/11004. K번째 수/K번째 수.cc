#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_LEN 5000004
int arr[MAX_LEN];
int k, n;

void input() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) 
        cin >> arr[i];
}

void solution() {
    sort(arr, arr + n);
    cout << arr[k - 1] << '\n';
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