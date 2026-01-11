#include <bits/stdc++.h>
using namespace std;

bool visited[104][104];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int ans = 0;
    while (n--) {
        int r, c;
        cin >> r >> c;

        for (int i = r; i <= 100 && i < r + 10; i++)
            for (int j = c; j <= 100 && j < c + 10; j++) {
                if (!visited[i][j]) ans++;
                visited[i][j] = true;
            }
    }

    cout << ans << "\n";

    return 0;
}