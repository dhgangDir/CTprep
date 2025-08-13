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

void func(int size) {
    if (size == m) {
        for (int i = 0; i < m; i++)
            cout << seq[arr[i]] << ' ';
        cout << '\n';
        return ;
    }
    int st = 0;
    if (size) st = arr[size - 1];
    for (int i = st; i < n; i++) {
        arr[size] = i;
        func(size + 1);
    } 
}

void solution() {
    sort(seq, seq + n);
    func(0);
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