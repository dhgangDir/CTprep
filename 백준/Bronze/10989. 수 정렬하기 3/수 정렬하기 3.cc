#include <iostream>
using namespace std; 

#define MAX_NUM 10004

int arr[MAX_NUM];
int n, max_num;
void input() {
    cin >> n;
    int input_num;
    while(n--) {
        cin >> input_num;
        arr[input_num]++;
        max_num = max(max_num, input_num);
    }
}

void solution() {
    for (int i = 1; i <= max_num; i++) {
        for (int j = arr[i]; j > 0; j--) {
            cout << i << '\n';
        }
    }
}

void solve() {
    input();
    solution();
}

int main() {
    solve();
    return 0;
}