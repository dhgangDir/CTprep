#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];
    for (int i = 0 ; i < n; i++)
        cin >> arr[i];

    int minNum = arr[0], maxNum = arr[0];
    for (int i = 1; i < n; i++) {
        if (minNum > arr[i]) minNum = arr[i];
        if (maxNum < arr[i]) maxNum = arr[i];
    }
    delete[] arr;

    cout << minNum << " " << maxNum << "\n";

    return 0;
}