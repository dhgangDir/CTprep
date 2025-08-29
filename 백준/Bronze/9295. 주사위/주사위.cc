#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        int dice1, dice2;
        cin >> dice1 >> dice2;
        cout << "Case " << i << ": " << dice1 + dice2 << '\n';
    }
}