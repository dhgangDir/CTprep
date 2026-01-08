#include <iostream>
using namespace std;

int main() {
    int h, m, cooked;
    cin >> h >> m >> cooked;

    int display = h * 60 + m + cooked;
    cout << display / 60 % 24 << " " << display % 60 << "\n";
    return 0;
}