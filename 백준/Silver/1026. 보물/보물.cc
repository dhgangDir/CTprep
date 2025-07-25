#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_LEN 54

int a[MAX_LEN], b[MAX_LEN];
int n, sum;

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    sort(a, a + n);
    sort(b, b + n, greater<int>());

    for (int i = 0; i < n; i++) 
        sum = sum + (a[i] * b[i]);
    
    cout << sum << '\n';

    return 0;
}