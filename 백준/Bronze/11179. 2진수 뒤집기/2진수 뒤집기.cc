#include <iostream>
using namespace std;

long long n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;

    int rev_de = 0;
    while (n) {
        int num = n % 2;
        rev_de <<= 1;
        if (num) rev_de++;
        n /= 2;
    }
    cout << rev_de << '\n';
    return 0;
}