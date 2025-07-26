#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_LEN 1000004

int arr[MAX_LEN];

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) cin >> arr[i];

    sort(arr, arr + n);

    for (int i = 0; i < n; i++) cout << arr[i] << '\n';
    
    return 0;
}