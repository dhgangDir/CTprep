#include <bits/stdc++.h>
using namespace std;

char words[5][20];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int i = 0;
    while (cin >> words[i++]);

    for (int i = 0; i < 16; i++)
        for (int j = 0; j < 5; j++)
            if (words[j][i]) cout << words[j][i];
    cout << "\n";

    return 0;
}