#include <iostream>
#include <stack>
using namespace std;

int n;

void input() {
    cin >> n;
}

void solution() {
    while(n--) {
        stack<char> stk;
        string bracket;
        bool flag = true;

        cin >> bracket;
        for (const auto& c : bracket) {
            if (c == '(') 
                stk.push(c);
            else if (c == ')'){
                if(!stk.empty())
                    stk.pop();
                else {
                    flag = false; 
                    break;
                }
            }
        }
        if (flag && stk.empty()) cout << "YES\n";
        else cout << "NO\n";
    }
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