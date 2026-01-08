#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int sum = 0;
    for (int exp = 1; b / exp > 0; exp *= 10) {
        int temp = a * ((b / exp) % 10);
        cout << temp << "\n";
        sum += (temp * exp);
    }
    cout << sum << '\n';
    return 0;
}