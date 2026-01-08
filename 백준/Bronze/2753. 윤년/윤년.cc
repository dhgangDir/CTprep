#include <iostream>
using namespace std;

int main() {
    int y;
    cin >> y;
    cout << (((!(y % 4))&&((y % 100) || (!(y % 400)))) ? "1\n" : "0");
    return 0;
}