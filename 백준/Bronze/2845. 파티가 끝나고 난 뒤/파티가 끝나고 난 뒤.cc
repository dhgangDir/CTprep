#include <iostream>
using namespace std;

int l, p;

int main() {
    cin >> l >> p;
    for (int i = 0; i < 5; i++) {
        int tmp;
        cin >> tmp;
        cout << tmp - (l * p) << ' ';
    }
    cout << '\n';
    return 0;
}
