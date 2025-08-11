#include <iostream>
using namespace std;

typedef long long ll;

ll POW(ll a, ll b, ll m) {
    if (b == 1) return a % m;
    ll temp = POW(a, b/2, m);
    temp = (temp * temp) % m; 
    if (b % 2) return (temp * a) % m; 
    return temp;
}

int main() {
    ll a, b, c;
    cin >> a >> b >> c;
    cout << POW(a, b, c) << '\n';
    return 0;
}