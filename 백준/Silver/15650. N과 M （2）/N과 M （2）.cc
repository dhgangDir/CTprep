#include <iostream>
using namespace std;

int arr[10];
bool isused[10];
int n, m;

void input() {
    cin >> n >> m;
}

void func(int size, int start) {
    if (size == m) {
        for (int i = 0; i < m; i++) 
            cout << arr[i] << ' ';
        cout << '\n';
        return ;
    }

    for (int i = start + 1; i <= n; i++) {
        if (!isused[i]) {
            arr[size] = i;
            isused[i] = true;
            func(size + 1, i);
            isused[i] = false;
        }
    }
}

void solve() {
    input();
    func(0, 0);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}