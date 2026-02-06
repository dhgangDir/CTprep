#include <bits/stdc++.h>
using namespace std;

const int MAX = 20;
int arr[MAX + 4];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    double bob = 0;
    int idx;
    for (int i = 0; i < MAX; ++i) {
        cin >> arr[i];
        bob += arr[i];
        if (arr[i] == 20)
            idx = i;
    }
    bob = bob / MAX;

    double alice = MAX;
    alice += arr[(idx + MAX + 1) % MAX];
    alice += arr[(idx + MAX - 1) % MAX];
    alice = alice / 3;
    
    if (bob == alice)
        cout << "Tie\n";
    else if (bob < alice)
        cout << "Alice\n";
    else
        cout << "Bob\n";

    return 0;
}