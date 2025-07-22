#include <iostream>

using namespace std;

int square_counts[1004] = {0, 1, 3};

int main() {
    int n;
    cin >> n;

    for (int i = 3; i <= n; i++) {
        if (i % 2) square_counts[i] = (2 * square_counts[i - 1] - 1) % 10007;
        else square_counts[i] = (2 * square_counts[i - 1] + 1) % 10007;
    }

    cout << square_counts[n] << '\n';

    return 0;
}