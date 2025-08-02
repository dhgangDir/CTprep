#include <iostream>
using namespace std;

typedef long long ll;
ll a, b;
string convert_num(ll x) {
    string conv_num;
    for (ll i = 0; i < x; ++i) {
        conv_num.push_back('1');
    }
    return conv_num;
}

ll gcd(ll x, ll y) {
    return y ? gcd(y, x % y) : x;
}

int main() {
    cin >> a >> b;

    cout << convert_num(gcd(a, b)) << '\n';

    return 0;
}