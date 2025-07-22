#include <iostream>

using namespace std;

int n;

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j >= n - i - 1) cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n; j++) {
            if (j > i) cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }

    return 0;
}