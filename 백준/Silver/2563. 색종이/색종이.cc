#include <iostream>
using namespace std;

#define EAGE 10
#define LEAGE 104
bool grid[LEAGE][LEAGE];

int main() {
    int t, x, y, cnt = 0;
    cin >> t;

    while (t--) {
        cin >> x >> y;
        for (int i = x; i < x + EAGE; i++) {
            for (int j = y; j < y + EAGE; j++) {
                grid[i][j] = true;
            }
        }
    }

    for (int i = 0; i < LEAGE; i++) {
        for (int j = 0; j < LEAGE; j++) {
            if (grid[i][j]) cnt++; 
        }
    }

    cout << cnt << '\n';

    return 0;
}