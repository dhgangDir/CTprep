#include <iostream>
using namespace std;

#define MAX_LEN 1004
int arr[MAX_LEN];
int a, b;

void input() {
    cin >> a >> b;
}

void solution() {
    int i = 1, j = 1;
    while (i <= b) {
        int tmp = i;
        bool flag = false;
        while (tmp--) {
            if (j >= MAX_LEN) {
                flag = true;
                break;
            }
            arr[j++] = i;
        }
        if (flag) break;
        i++;
    }
    long long sum = 0;
    for (int i = a; i <= b; i++) sum += arr[i];
    cout << sum << '\n';
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