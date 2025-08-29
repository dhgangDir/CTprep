#include <iostream>
using namespace std;

int x;
string uos = "UOS";

int main() {
    cin >> x;
    cout << uos[(x - 1)%3] << '\n';
    return 0;
}