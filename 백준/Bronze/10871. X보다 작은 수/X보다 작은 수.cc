#include <iostream>
using namespace std;

int main() {
    int n, x;

    cin >> n >> x;

    int a;
    while (cin >> a)
        if (a < x)
            cout << a << " ";
    cout << "\n";

    return 0;
}