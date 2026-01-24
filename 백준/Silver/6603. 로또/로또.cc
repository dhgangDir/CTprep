#include <bits/stdc++.h>
using namespace std;

const int MAX = 6;
int arr[15], k;
void lotto(vector<int>& v, int start, int size) {
    if (size == MAX) {
        for (const auto& i : v)
            cout << i << " ";
        cout << "\n";
        return ;
    }

    for (int i = start; i < k; ++i) {
        v[size] = arr[i];
        lotto(v, i + 1, size + 1);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (true) {
        cin >> k;
        if (!k) break;

        vector<int> v(MAX);
        for (int i = 0; i < k; ++i)
            cin >> arr[i];
        lotto(v, 0, 0);
        cout << "\n";
    }

    return 0;
}