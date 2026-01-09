#include <bits/stdc++.h>
using namespace std;

int v[1004];

int main() {
    int n;
    cin >> n;

    int maxNum = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        maxNum = max(maxNum, v[i]);
    }

    double sum = 0.0;
    for (int i = 0; i < n; i++)
        sum += ((double)v[i]/maxNum*100);

    cout.precision(6);
    cout << sum / (double)n << "\n";

    return 0;
}