#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, w, h, l;
    cin >> n >> w >> h >> l;

    cout << min(n, ((w / l) * (h / l))) << "\n";

    return 0;
}