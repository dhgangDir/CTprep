#include <iostream>
#include <stack>
using namespace std;

string bracket;
stack<char> stk;
int cnt;

void input() {
    cin >> bracket;
}

void solution() {
    for (int i = 0; i < bracket.size(); i++) {
        if (bracket[i] == '(') 
            stk.push(bracket[i]);
        else {
            if (bracket[i - 1] == '(')
                cnt += (stk.size() - 1);
            else 
                cnt++;
            stk.pop();
        }
    }
    cout << cnt << '\n';
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