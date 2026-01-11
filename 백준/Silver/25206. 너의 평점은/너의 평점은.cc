#include <bits/stdc++.h>
using namespace std;

map<string, double> mp = {
    {"A+", 4.5}, {"A0", 4.0},
    {"B+", 3.5}, {"B0", 3.0},
    {"C+", 2.5}, {"C0", 2.0},
    {"D+", 1.5}, {"D0", 1.0},
    {"F", 0.0}
};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string name, score;
    double times;

    double sum = 0.0, total = 0.0;
    while (cin >> name >> times >> score) {
        if (score != "P") {
            sum += times * mp[score];
            total += times;
        }
    }

    cout << fixed;
    cout.precision(6);
    cout << sum / total << "\n";

    return 0;
}