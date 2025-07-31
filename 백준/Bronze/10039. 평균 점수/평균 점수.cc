#include <iostream>
using namespace std;

#define MAX_STD 5

int score[MAX_STD + 4], sum;

void solution() {
    for (int i = 0; i < MAX_STD; i++) {
        cin >> score[i];
        score[i] = score[i] < 40 ? 40 : score[i];
        sum = sum + score[i];
    }
    cout << sum / MAX_STD << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solution();
    return 0;
}