#include <iostream>
using namespace std;

#define MAX_NUM 10004

int num[MAX_NUM];
int n, max_num;

void input() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        num[tmp]++;
        max_num = max(max_num, tmp);
    }
}

void solution() {
    for (int i = 1; i <= max_num; i++) {
        while (num[i]--)
            cout << i << '\n';
    }
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