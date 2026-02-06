#include <bits/stdc++.h>
using namespace std;

const int MAX = 100000;
int a[MAX + 4];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    sort(a, a + n);

    int m;
    cin >> m;

    while (m--) {
        int x;
        cin >> x;

        bool flag = false;
        int st = 0, en = n - 1;
        while (st <= en) {
            int mid = (st + en) / 2;
            if (a[mid] == x) {
                flag = true;
                cout << 1 << "\n";
                break;
            }
            if (x < a[mid])
                en = mid - 1;
            else
                st = mid + 1;
        }
        if (!flag)
            cout << 0 << "\n";
    }

    return 0;
}