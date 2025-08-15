#include <iostream>
#include <algorithm>
using namespace std;

int arr[10], seq[10];
bool isused[10];
int n, m;

void input() {
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> seq[i];
}

void func(int size) {
    if (size == m) {
        for (int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return ;
    }

    int tmp = 0;
    for (int i = 0; i < n; i++) {
        if (!isused[i] && tmp != seq[i]) {
            isused[i] = true;
            arr[size] = seq[i];
            tmp = arr[size];
            func(size + 1);
            isused[i] = false;
        }
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
