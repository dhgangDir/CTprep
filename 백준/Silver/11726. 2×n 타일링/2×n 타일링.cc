#include <iostream>
using namespace std;

int n;
int square_counts[1004] = {0, 1, 2};

int main() {
    cin >> n;

    for (int i = 3; i <= n; i++) {
        square_counts[i] = (square_counts[i - 2] + square_counts[i - 1]) % 10007;
    }

    cout << square_counts[n] << '\n';

    return 0;
}