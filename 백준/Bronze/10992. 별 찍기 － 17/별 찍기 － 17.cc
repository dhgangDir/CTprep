#include <iostream>

using namespace std;

int n;

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) 
            cout << " ";
        for (int k = 0; k < i * 2 + 1; k++) {
            if (i == n - 1 || !k || k == i * 2) cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }

    return 0;
}