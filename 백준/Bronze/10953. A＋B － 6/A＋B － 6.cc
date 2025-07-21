#include <iostream>

using namespace std;

int t, a, b;
char d;

int main() {
    cin >> t;

    while (t--) {
        cin >> a >> d >> b;
        cout << a + b <<'\n';
    }
    return 0;
}