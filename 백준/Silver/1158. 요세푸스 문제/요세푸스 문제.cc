#include <iostream>
#include <list>
using namespace std;

list<int> lst;
int n, k;

void input() {
    cin >> n >> k;
}

void solution() {
    for (int i = 1; i <= n; i++)
        lst.push_back(i);
    
    auto it = lst.begin();
    cout << '<';
    while (!lst.empty()) {
        for (int i = 0; i < k - 1; i++) {
            it++;
            if (it == lst.end()) it = lst.begin();
        }
        if (lst.size() > 1) cout << *it << ", ";
        else cout << *it << ">\n";
        it = lst.erase(it);
        if (it == lst.end()) it = lst.begin();
    }
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