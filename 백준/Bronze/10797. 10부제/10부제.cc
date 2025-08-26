#include <iostream>
using namespace std;

int hi;

int main() {
    cin >> hi;
    int cnt = 0;
    for (int i = 0; i < 5; i++) {
        int tmp;
        cin >> tmp;
        if (hi == tmp) cnt++;
    }
    cout << cnt << '\n';
    return 0;
}