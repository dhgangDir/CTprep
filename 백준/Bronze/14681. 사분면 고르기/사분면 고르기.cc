#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    cout << (-x < 0 && -y < 0 ? "1\n" :
        -x > 0 && -y > 0 ? "3\n" :
        -x < 0 && -y > 0 ? "4\n" : "2\n");
    return 0;
}