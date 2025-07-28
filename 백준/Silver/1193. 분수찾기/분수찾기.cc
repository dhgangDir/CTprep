#include <iostream>
using namespace std;

int x;

void input() {
    cin >> x;
}

void solution() {
    int seq = 1, i = 1;

    while (seq < x) {
        i++;
        seq = seq + i;
    }

    int start = seq - i + 1;
    int deno, nume;
    if (i % 2) {
        nume = i, deno = 1;
        for (int i = start; i < x; i++) {
            nume--;
            deno++;
        }
    }
    else {
        nume = 1, deno = i;
        for (int i = start; i < x; i++) {
            nume++;
            deno--;
        }
    }
    cout << nume << '/' << deno << '\n';
}

void solve() {
    input();
    solution();
}

int main() {
    solve();
    return 0;
}