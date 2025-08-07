#include <iostream>
#include <iomanip>
using namespace std;

#define MAX_LEN 1004
int t, n;
int score[MAX_LEN];

void input() {
    cin >> t;
}

void solution() {
    while(t--) {
        cin >> n;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> score[i];
            sum += score[i];
        }

        double avg = (double) sum / n;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (avg < score[i]) cnt++;
        }

        cout << fixed << setprecision(3) << ((double) cnt / n) * 100 << "%\n";
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