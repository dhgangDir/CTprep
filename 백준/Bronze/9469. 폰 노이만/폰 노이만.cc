#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int P;
    cin >> P;

    cout << fixed << setprecision(6);

    while (P--) {
        int N;
        double D, A, B, F;
        cin >> N >> D >> A >> B >> F;

        double time = D / (A + B);
        double ans = F * time;

        cout << N << " " << ans << "\n";
    }

    return 0;
}