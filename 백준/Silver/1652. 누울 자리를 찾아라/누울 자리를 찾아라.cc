#include <iostream>
using namespace std;

#define MAX_MAP 104
int n;
string mp[MAX_MAP];

void input() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> mp[i];
    }
}

void solution() {
    int width_cnt = 0;
    for (int i = 0; i < n; i++) {
        int room_size = 0;
        for (int j = 0; j < n; j++) {
            if (mp[i][j] == '.') room_size++;
            else {
                if (room_size >= 2) {
                    width_cnt++;
                }
                room_size = 0;
            }
        }
        if (room_size >= 2) width_cnt++;
    }

    int height_cnt = 0;
    for (int i = 0; i < n; i++) {
        int room_size = 0;
        for (int j = 0; j < n; j++) {
            if (mp[j][i] == '.') room_size++;
            else {
                if (room_size >= 2) {
                    height_cnt++;
                }
                room_size = 0;
            }
        }
        if (room_size >= 2) height_cnt++;
    }

    cout << width_cnt << ' ' << height_cnt << '\n';
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