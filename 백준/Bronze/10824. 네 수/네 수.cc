#include <iostream>
using namespace std;

typedef long long ll;

ll a, c;
string b, d;

void input() {
    cin >> a >> b >> c >> d; 
}

void attach_num(ll& des, string src) {
    for (const auto& num : src) {
        des = des * 10 + num - '0';
    }
}

void solution() {
    attach_num(a, b);
    attach_num(c, d);
    cout << a + c << '\n';
}

void solve() {
    input();
    solution();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}