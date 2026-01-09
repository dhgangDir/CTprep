#include <iostream>
using namespace std;

int main() {
    int maxNum, maxIndex = 1;
    int n;

    cin >> maxNum;
    for (int i = 1; i < 9; i++) {
        cin >> n;
        if (n > maxNum) {
            maxIndex = i + 1;
            maxNum = n;
        }
    }
    cout << maxNum << "\n" << maxIndex << "\n";

    return 0;
}