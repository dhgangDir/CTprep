#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000000;
int arr[MAX + 4];
vector<int> v; // 값이 1인 인덱스 저장

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i <= n; ++i) {
        cin >> arr[i];
        if (arr[i] == 1) v.push_back(i);
    }

    int x;
    cin >> x;

    if (v.size() > 2) {
        cout << "NO\n";
    } else if (v.size() == 2) {
        if (v[0] + x == v[1]) {
            cout << "YES\n";
            cout << v[0] << " " << v[1] << "\n";
        } else {
            cout << "NO\n";
        }
    } else if (v.size() == 1) {
        int idx = v[0];

        int sender = idx - x;
        if (sender >= 0 && arr[sender] >= 3) {
            cout << "YES\n";
            cout << sender << " " << idx << "\n";
            return 0;
        }

        int receiver = idx + x;
        if (receiver <= n && arr[receiver] >= 1) {
            cout << "YES\n";
            cout << idx << " " << receiver << "\n";
            return 0;
        }

        cout << "NO\n";
    } else {
        for (int i = 0; i <= n - x; ++i) {
            if (arr[i] >= 3 && arr[i + x] >= 1) {
                cout << "YES\n";
                cout << i << " " << i + x << "\n";
                return 0;
            }
        }
        cout << "NO\n";
    }

    return 0;
}