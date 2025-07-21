#include <iostream>
using namespace std;

int n, x, a;

int main() {
    cin >> n >> x;

    while (n--) {
        cin >> a;
        if (x > a) cout << a << ' ';
    }
    cout << '\n';
    
    return 0;
}