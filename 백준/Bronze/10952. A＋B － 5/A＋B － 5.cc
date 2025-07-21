#include <iostream>

using namespace std;

int a, b;

int main() {
    while (cin >> a >> b) {
        if (!a && !b) break;
        cout << a + b << '\n';
    }
    
    return 0;
}