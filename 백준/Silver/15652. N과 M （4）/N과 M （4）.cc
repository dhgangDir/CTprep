#include <iostream>
using namespace std;

int arr[10];
int n, m;

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

    int i;
    if (!size) i = 1;
    else i = arr[size - 1];
    for ( ; i <= n; i++) {
        arr[size] = i;
        func(size + 1);
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