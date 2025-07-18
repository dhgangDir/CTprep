#include <iostream>

using namespace std;

#define FLAG 42
int pocket[FLAG], cnt;

int main() {
    int n;

    for (int i = 0; i < 10; i++) {
        cin >> n;
        pocket[n%FLAG]++;
    }
    
    for (int i = 0; i < FLAG; i++)
        if (pocket[i]) cnt++;
    
    cout << cnt << '\n';
    return 0;
}