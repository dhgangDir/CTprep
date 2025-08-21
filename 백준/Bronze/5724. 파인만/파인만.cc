#include <iostream>
using namespace std;

#define MAX_LEN 104
#define MAX_NUM 101

int arr[MAX_LEN] = {0, 1};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for (int i = 2; i < MAX_NUM; i++) 
        arr[i] = i * i + arr[i - 1];

    int n;
    while(cin >> n) {
        if (!n) break;
        cout << arr[n] << '\n';
    }
    return 0;
}