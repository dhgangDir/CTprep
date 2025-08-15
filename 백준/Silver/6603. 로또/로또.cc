#include <iostream>
using namespace std;

int k;
int arr[15], seq[15];

void input() {
    cin >> k;
    if (!k) 
        exit(0);
    for (int i = 0; i < k; i++)
        cin >> seq[i];
}

void func(int size, int st) {
    if (size == 6) {
        for (int i = 0; i < 6; i++) 
            cout << arr[i] << ' ';
        cout << '\n';
        return ;
    }

    for (int i = st; i < k; i++) {
        arr[size] = seq[i];
        func(size + 1, i + 1); 
    }
}

void solution() {
   while(true) {
        input();
        func(0, 0);
        cout << '\n';
   }  
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solution();
    return 0;
}