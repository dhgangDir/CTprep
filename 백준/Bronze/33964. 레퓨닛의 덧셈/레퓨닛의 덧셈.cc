#include <iostream>

using namespace std;

int pocket[14] = {
    0,
    1,
    11,
    111,
    1111,
    11111,
    111111,
    1111111,
    11111111,
    111111111
};

int main() {
    int x, y;

    cin >> x >> y;
    cout << pocket[x] + pocket[y] << '\n';
    return 0;
}