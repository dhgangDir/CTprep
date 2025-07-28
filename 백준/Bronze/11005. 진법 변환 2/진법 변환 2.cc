#include <iostream>
#include <stack>
using namespace std;

stack<char> b_number_system;
int number, n;

void input() {
    cin >> number >> n;
}

void solution() {
    for (; number > 0; number /= n) {
        int reminder = number % n;
        if (reminder >= 0 && reminder <= 9) 
            b_number_system.push(reminder + '0');
        else 
            b_number_system.push('A' + reminder - 10);
    }

    while (b_number_system.size()) {
        cout << b_number_system.top();
        b_number_system.pop();
    }
    cout << '\n';
}

void solve () {
    input();
    solution();
}

int main() {
    solve();
    return 0;   
}