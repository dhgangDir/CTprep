#include <iostream>
using namespace std;

int main() {
    int x, n, a, b;

    cin >> x >> n;

    int sum = 0;
    while (n--) {
        cin >> a >> b;
        sum += (a * b);
    }

    cout << ((x - sum) != 0 ? "No\n" : "Yes\n");

    return 0;
}