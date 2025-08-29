#include <iostream>
using namespace std;

int sum;

int main() {
    for (int i = 0; i < 4; i++) {
        int s;
        cin >> s;
        sum += s;
    }
    cout << sum / 60 << '\n' << sum % 60 << '\n';
    return 0;
}