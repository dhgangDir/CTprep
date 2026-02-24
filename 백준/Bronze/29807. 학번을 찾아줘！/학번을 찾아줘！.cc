#include <bits/stdc++.h>
using namespace std;

const int MAX = 5;
long long score[MAX + 4];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
        cin >> score[i];

    long long ans = 0;

    ans = score[0] > score[2] ? (score[0] - score[2]) * 508 : (score[2] - score[0]) * 108;
    ans += score[1] > score[3] ? (score[1] - score[3]) * 212 : (score[3] - score[1]) * 305;
    ans += score[4] * 707;

    cout << ans * 4763 << "\n";

    return 0;
}