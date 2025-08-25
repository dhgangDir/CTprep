#include <iostream>
using namespace std;

int k, n, m;
int main() {
    cin >> k >> n >> m;
    if (m < k * n) 
        cout << ((k * n) - m) << '\n';
    else 
        cout << 0 << '\n';
    return 0;
}