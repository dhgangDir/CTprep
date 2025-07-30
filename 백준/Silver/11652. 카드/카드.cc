#include <iostream>
#include <map>
using namespace std;

typedef long long ll;

map<ll, ll> card_mp;
int n;

void input() {
    ll card;
    cin >> n;
    while(n--) {
        cin >> card;
        if (card_mp.find(card) != card_mp.end()) 
            card_mp[card]++;
        else 
            card_mp[card] = 1;
    }
}

void solution() {
    auto it = card_mp.begin();
    ll max_num = (*it).first;
    ll max_cnt = (*it).second;

    advance(it, 1);
    for (; it != card_mp.end(); it++) {
        if (max_cnt < (*it).second) {
            max_num = (*it).first;
            max_cnt = (*it).second;
        } 
    }

    cout << max_num << '\n';
}

void solve() {
    input();
    solution();
}

int main() {
    solve();
    return 0;
}