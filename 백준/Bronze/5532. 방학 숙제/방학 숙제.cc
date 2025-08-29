#include <iostream>
using namespace std;

int l, a, b, c, d;

int main() {
    cin >> l >> a >> b >> c >> d;

    int kor = a % c ? (a / c) + 1 : (a / c);
    int mth = b % d ? (b / d) + 1 : (b / d);

    cout << l - max(kor, mth) << '\n';

    return 0;
}