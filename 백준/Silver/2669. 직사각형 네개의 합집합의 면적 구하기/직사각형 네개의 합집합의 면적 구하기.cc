#include <iostream>
using namespace std;

#define MAX_SIED 104

int grid[MAX_SIED][MAX_SIED];

void solution() {
    int x1, y1, x2, y2;
    for (int i = 0; i < 4; i++) {
        cin >> y1 >> x1 >> y2 >> x2;
        for (int j = x1; j < x2; j++) {
            for (int k = y1; k < y2; k++) {
                grid[j][k] = 1;
            }
        }
    }
    int cnt = 0;;
    for (int i = 0; i < MAX_SIED; i++) {
        for (int j = 0; j < MAX_SIED; j++) {
            if (grid[i][j]) cnt++;
        }
    }
    cout << cnt << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solution();
    return 0;
}