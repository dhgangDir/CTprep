#include <iostream>
using namespace std;

int f, s;

void solution() {
    while (true) {
        cin >> f >> s;
        if (!f && !s) exit(0);
        if (!(s % f)) 
            cout << "factor\n";
        else if (!(f % s))
            cout << "multiple\n";
        else 
            cout << "neither\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solution();
    return 0;
}