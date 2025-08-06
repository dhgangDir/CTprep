#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_LEN 1000004

int a[MAX_LEN], b[MAX_LEN];
int n, m;

void inputArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
}

void input() {
    cin >> n >> m;
    inputArray(a, n);
    inputArray(b, m);
}

void solution() {
    sort(a, a + n);
    sort(b, b + m);

    int i = 0, j = 0;
    while (i < n && j < m) {
        if (a[i] < b[j]) {
            cout << a[i] << ' ';
            i++;
        } else {
            cout << b[j] << ' ';
            j++;
        }
    }
    
    while (i < n) {
        cout << a[i] << ' ';
        i++;
    }
    
    while (j < m) {
        cout << b[j] << ' ';
        j++;
    }
    cout << '\n';
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