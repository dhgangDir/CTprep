#include <iostream>

using namespace std;

int n;

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j <= i) cout << "*";
            else cout << " ";
        }

        for (int j = n; j < 2 * n; j++) {
            if (j >= 2 * n - i - 1) cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }

    for (int i = n; i < 2 * n - 1; i++) {
        for (int j = 0; j < n; j++) {
            if (j < 2 * n - i - 1) cout << "*";
            else cout << " ";
        }

        for (int j = n; j < 2 * n; j++) {
            if (j > i) cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }

    return 0;
}