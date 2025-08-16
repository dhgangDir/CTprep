#include <iostream>
#include <utility>
using namespace std;

#define MAX_LEN 100004

pair<int, int> arr[MAX_LEN], tmp[MAX_LEN];
int n;

void input() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        arr[i] = {x, y};
    }
}

void merge(int st, int en) {
    int mid = (st + en) / 2;
    int lidx = st, ridx = mid;
    for (int i = st; i < en; i++) {
        if (lidx == mid) tmp[i] = arr[ridx++];
        else if (ridx == en) tmp[i] = arr[lidx++];
        else {
            if (arr[lidx].second < arr[ridx].second) tmp[i] = arr[lidx++];
            else if (arr[lidx].second == arr[ridx].second) {
                if (arr[lidx].first <= arr[ridx].first) tmp[i] = arr[lidx++];
                else tmp[i] = arr[ridx++];
            } else tmp[i] = arr[ridx++];
        }
    }
    for (int i = st; i < en; i++) arr[i] = tmp[i];
}

void merge_sort(int st, int en) {
    if (en <= st + 1) return ;
    int mid = (st + en) / 2;
    merge_sort(st, mid);
    merge_sort(mid, en);
    merge(st, en);
}

void solution() {
    merge_sort(0, n);
    for (int i = 0; i < n; i++) cout << arr[i].first << " " << arr[i].second << '\n';
}

void solve() {
    input();
    solution();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}