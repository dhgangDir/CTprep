#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> a_vec;
int a_sys, b_sys;
int a_digit, a_num;

void input() {
    cin >> a_sys >> b_sys;
    cin >> a_digit;
    for (int i = 0; i < a_digit; i++) {
        cin >> a_num;
        a_vec.push_back(a_num);
    }
}

void solution() {
    int sys_pow = 1;
    int conv_num = a_vec[a_digit - 1] * sys_pow;
    for (int i = a_digit - 2; i >= 0; --i) {
        sys_pow = sys_pow * a_sys;
        conv_num = conv_num + a_vec[i] * sys_pow;
    }

    stack<int> stk;
    while (conv_num) {
        stk.push(conv_num % b_sys);
        conv_num = conv_num / b_sys;
    }

    while (!stk.empty()) {
        cout << stk.top() << ' ';
        stk.pop();
    }
    cout << '\n';
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