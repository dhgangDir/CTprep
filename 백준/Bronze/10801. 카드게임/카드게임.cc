#include <iostream>
using namespace std;

int arr[2][10];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for (int i = 0; i < 2; i++) 
        for (int j = 0; j < 10; j++)
            cin >> arr[i][j];

    int a_cnt = 0, b_cnt = 0;
    for (int i = 0; i < 10; i++) {
        if (arr[0][i] < arr[1][i]) b_cnt++;
        else if (arr[0][i] > arr[1][i]) a_cnt++;
    }
    cout << (a_cnt != b_cnt ? (a_cnt < b_cnt ? "B\n" : "A\n") : "D\n");
}