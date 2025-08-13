#include <iostream>
using namespace std;

int n, m;
int arr[10];
bool isused[10];

void input() {
    cin >> n >> m;
}

void func(int size) {
    if (size == m) {
        for (int i = 0; i < m; i++) 
            cout << arr[i] << ' ';
        cout << '\n';
        return ;
    }

    for (int i = 1; i <= n; i++) {
        if (!isused[i]) {
            arr[size] = i;
            isused[i] = true;
            func(size + 1);
            isused[i] = false;
        }
    }
}

void solve() {
    input();
    func(0);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}
