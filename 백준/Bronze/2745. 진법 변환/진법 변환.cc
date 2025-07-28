#include <iostream>
#include <algorithm>
using namespace std;

string b_number_system;
int n, sum;

void input() {
    cin >> b_number_system >> n;
}

void solution() {
    reverse(b_number_system.begin(), b_number_system.end());

    int digit = 1;
    for (int i = 0; i < b_number_system.size(); i++) {
        if (b_number_system[i] >= '0' && b_number_system[i] <= '9')
            sum = sum + (b_number_system[i] - '0') * digit;
        else 
            sum = sum + (b_number_system[i] - 'A' + 10) * digit;
        digit = digit * n;
    }

    cout << sum << '\n';
}

void solve() {
    input();
    solution();
}

int main() {
    solve();
    return 0;
}