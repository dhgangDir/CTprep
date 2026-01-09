#include <iostream>
using namespace std;

int main() {
    int dice01, dice02, dice03;
    cin >> dice01 >> dice02 >> dice03;
    if (dice01 == dice02 && dice02 == dice03)
        cout << 10000 + dice01 * 1000 << "\n";
    else if (dice01 == dice02 || dice01 == dice03)
        cout << 1000 + dice01 * 100 << "\n";
    else if (dice02 == dice03)
        cout << 1000 + dice02 * 100 << "\n";
    else
        cout << (dice01 < dice02 ? dice02 < dice03 ? dice03 : dice02 :
            dice01 < dice03 ? dice03 : dice01) * 100 << "\n";
    return 0;
}