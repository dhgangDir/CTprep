#include <iostream>
using namespace std;

int v[104], n, m, i, j;

int main() {
    cin >> n >> m;

    for (int k = 1; k <= n; k++)
        v[k] = k;

    while (cin >> i >> j) {
        while (i <= j) {
            swap(v[i], v[j] );
            i++;
            j--;
        }
    }

    for (int k = 1; k <= n; k++)
        cout << v[k] << " ";
    cout << "\n";

    return 0;
}