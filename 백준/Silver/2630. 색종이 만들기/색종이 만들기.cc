#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> vec;
int blue_cnt, white_cnt;
int n;

void input() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        vector<int> row;
        for (int j = 0; j < n; j++) {
            int tmp;
            cin >> tmp;
            row.push_back(tmp);
        }
        vec.push_back(row);
    }
}

void func(int row, int col, int num) {
    if (num <= 0) return ;
    int color = vec[row][col];
    bool flag = true;
    for (int i = row; i < row + num; i++) {
        for (int j = col; j < col + num; j++) {
            if (color != vec[i][j]) {
                flag = false;
                break;
            }
        }
        if (!flag) break;
    }
    if (flag) {
        if (color) blue_cnt++;
        else white_cnt++;
    } else {
        int next_num = num / 2;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                func(row + next_num * i, col + next_num * j, next_num);
            }
        }
    }
}

void solution() {
    func(0, 0, n);
    cout << white_cnt << '\n';
    cout << blue_cnt << '\n';
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