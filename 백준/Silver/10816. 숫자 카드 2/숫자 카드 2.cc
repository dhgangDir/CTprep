#include <bits/stdc++.h>
using namespace std;

const int MAX = 500000;
int cards[MAX + 4];

void func(int mid, int size) {
    int i = mid;
    while (i > 0 && cards[i - 1] == cards[mid])
        i--;

    int j = mid;
    while (j < size && cards[j + 1] == cards[mid])
        j++;
    cout << j - i + 1 << " ";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
        cin >> cards[i];

    sort(cards, cards + n);

    int m;
    cin >> m;
    while (m--) {
        int num;
        cin >> num;

        cout << upper_bound(cards, cards + n, num)
            - lower_bound(cards, cards + n, num) << " ";
    }
    cout << "\n";
}