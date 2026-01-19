#include <bits/stdc++.h>
using namespace std;

stack<int> stk;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int ticket = 1;
    while (n--) {
        int num;
        cin >> num;

        stk.push(num);
        while (!stk.empty()) {
            if (ticket != stk.top())
                break ;
            stk.pop();
            ticket++;
        }
    }

    if (stk.empty())
        cout << "Nice\n";
    else
        cout << "Sad\n";

    return 0;
}