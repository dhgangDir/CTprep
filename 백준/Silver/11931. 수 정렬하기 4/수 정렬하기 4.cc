#include <iostream>
using namespace std;

#define MAX_LEN 1000004

int arr[MAX_LEN], tmp[MAX_LEN];
int n;

void input() {
    cin >> n;
    for (int i = 0; i < n; i++) 
        cin >> arr[i];
}

void merge(int st, int en) {
    int m = (st + en) / 2;
    int lidx = st, ridx = m;
    for (int i = st; i < en; i++) {
        if (lidx == m) tmp[i] = arr[ridx++];
        else if (ridx == en) tmp[i] = arr[lidx++];
        else if (arr[lidx] >= arr[ridx]) tmp[i] = arr[lidx++];
        else if (arr[lidx] < arr[ridx]) tmp[i] = arr[ridx++];
    }

    for (int i = st; i < en; i++) arr[i] = tmp[i];
}

void merge_sort(int st, int en) {
    if (en <= st + 1) return ;
    int m = (st + en) / 2;
    merge_sort(st, m);
    merge_sort(m, en);
    merge(st, en);
}

void solution() {
    merge_sort(0, n);
    for (int i = 0; i < n; i++) 
        cout << arr[i] << '\n';
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