#include <iostream>
using namespace std;

int main() {
    int n, m;

    cin >> n >> m;
    int* arr = new int[n+1];
    for (int i = 1; i <= n; i++)
        arr[i] = i;

    int i, j;
    for (int k = 0; k < m; k++) {
        cin >> i >> j;
        swap(arr[i], arr[j]);
    }

    for (int k = 1; k <= n; k++)
        cout << arr[k] << " ";
    cout << "\n";

    delete[] arr;
    
    return 0;
}