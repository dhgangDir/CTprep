#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int arr[10], seq[10];

void input() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) 
        cin >> seq[i];
}

void func(int size, int st) {
    if (size == m) {
        for (int i = 0; i < m; i++) 
            cout << arr[i] << ' ';
        cout << '\n';
        return ;
    }

    int tmp = 0;
    for (int i = st; i < n; i++) {
        if (tmp != seq[i]) {
            tmp = seq[i];
            arr[size] = seq[i];
            func(size + 1, i);
        }
    }
}

void solution() {
    sort(seq, seq + n);
    func(0, 0);
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