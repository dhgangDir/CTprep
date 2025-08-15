#include <iostream>
using namespace std;

#define MAX_CNT 104
bool switchs[MAX_CNT];
int switch_cnt, student_cnt;
int gender, numbers;

void input() {
    cin >> switch_cnt;
    for (int i = 1; i <= switch_cnt; i++) 
        cin >> switchs[i];
    cin >> student_cnt;
}

void male() {
    for (int i = 1; i * numbers <= switch_cnt; i++)
        switchs[i * numbers] = switchs[i * numbers] ? 0 : 1;
}

void female() {
    int st = numbers, en = numbers;
    while (st > 0 && en <= switch_cnt) {
        if (switchs[st] == switchs[en]) {
            st--;
            en++;
        }
        else 
            break;
    }
    st++;
    en--;

    for (int i = st; i <= en; i++) 
        switchs[i] = switchs[i] ? 0 : 1;
}

void solution() {
    while (student_cnt--) {
        cin >> gender >> numbers;
        if (gender == 1) male();
        else female();
    }
    for (int i = 1; i <= switch_cnt; i++) {
        cout << switchs[i] << ' ';
        if (!(i % 20)) cout << '\n';
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