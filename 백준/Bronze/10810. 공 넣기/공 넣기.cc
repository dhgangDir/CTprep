#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m;

    cin >> n >> m;

    int* arr = new int[n];
    fill(arr, arr + n, 0);

    int i, j, k;
    while (m--) {
        cin >> i >> j >> k;
        for (; i <= j; i++)
            arr[i-1] = k;
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";
    
    return 0;
}