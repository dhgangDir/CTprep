#include <iostream>

using namespace std;

int sum;

int main() {
    int au;
    for (int i = 0; i < 5; i++) {
        cin >> au;
        au %= 10;
        sum += ((au * au) % 10);
    }

    cout << sum % 10<< '\n';
    return 0;
}