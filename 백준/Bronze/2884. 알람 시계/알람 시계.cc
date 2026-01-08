#include <iostream>
using namespace std;

int main() {
    int h, m;
    cin >> h >> m;
    if (!h) h = 24;
    int alarm = h * 60 + m - 45;
    cout <<  alarm/ 60 % 24 << " " << alarm % 60 << "\n";
    return 0;
}