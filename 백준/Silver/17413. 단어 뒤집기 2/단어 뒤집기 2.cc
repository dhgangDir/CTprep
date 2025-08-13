#include <iostream>
#include <string>
#include <stack>
using namespace std;

string str;
stack<char> stk;

void input() {
    getline(cin, str);
}

void print() {
    while (!stk.empty()) {
        cout << stk.top();
        stk.pop();
    }
}

void solution() {
    int i = 0;
    while (i < str.size()) {
        if (str[i] == '<') {
            print();
            while (str[i] != '>') {
                cout << str[i];
                i++;
            }
            cout << str[i];
        } else if (str[i] == ' ') {
            print();
            cout << str[i];
        } else {
            stk.push(str[i]);
        }
        i++;
    }
    print();
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