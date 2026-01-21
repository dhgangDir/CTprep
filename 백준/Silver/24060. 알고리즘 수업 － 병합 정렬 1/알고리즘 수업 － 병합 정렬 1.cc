#include <bits/stdc++.h>
using namespace std;

vector<int> v, tmp;
int k, ans = -1;

void merge(int l, int q, int r) {
    int i = l, j = q + 1, t = 0;
    while (i <= q && j <= r) {
        if (v[i] <= v[j])
            tmp[t++] = v[i++];
        else
            tmp[t++] = v[j++];
    }
    while (i <= q)
        tmp[t++] = v[i++];
    while (j <= r)
        tmp[t++] = v[j++];
    i = l; t = 0;
    while (i <= r) {
        v[i++] = tmp[t++];
        k--;
        if (k == 0) ans = v[i - 1];
    }
}

void merge_sort(int l, int r) {
    if (l < r) {
        int q = (l + r) / 2;
        merge_sort(l, q);
        merge_sort(q + 1, r);
        merge(l, q, r);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n >> k;

    v.resize(n);
    tmp.resize(n);

    for (int i = 0; i < n; ++i)
        cin >> v[i];

    merge_sort(0, v.size() - 1);

    cout << ans << "\n";

    return 0;
}