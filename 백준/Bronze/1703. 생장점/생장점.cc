#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (true) {
        int a;
        cin >> a;
        if (a == 0)
            break;

        int branch = 1;
        while (a--) {
            int sf, p;
            cin >> sf >> p;
            branch *= sf;
            branch -= p;
        }

        cout << branch << "\n";
    }
    
    return 0;
}