#include <bits/stdc++.h>
using namespace std;

void PrintStar(int blank, int star) {
    if (blank == 0) {
        for (int i = 0; i < star; i++)
            cout << "*";
        cout << "\n";
        return;
    }

    for (int i = 0; i < star; i++) {
        if (i < blank) cout << " ";
        else cout << "*";
    }
    cout << "\n";
    PrintStar(blank - 1, star + 1);
    for (int i = 0; i < star; i++) {
        if (i < blank) cout << " ";
        else cout << "*";
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    PrintStar(n - 1, n);

    return 0;
}