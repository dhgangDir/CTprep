#include <iostream>
#include <climits>
using namespace std;

int hambugi[3], drink[2];
int price = INT_MAX;

void input() {
    for (int i = 0; i < 3; i++)
        cin >> hambugi[i];
    for (int i = 0; i < 2; i++) 
        cin >> drink[i];
}

void solution() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            int tmp = hambugi[i] + drink[j] - 50;
            price = price < tmp ? price : tmp;
        }
    } 

    cout << price << '\n';
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