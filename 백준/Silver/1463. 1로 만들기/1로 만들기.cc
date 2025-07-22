#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_NUMBER 1000004

int counts[MAX_NUMBER];
int x;

int main() {
    fill(counts, counts + MAX_NUMBER, -1);
    cin >> x;
    counts[x] = 0;
    for (int i = x; i > 1; i--) {
        if (counts[i] == -1) continue;
        if (!(i % 3) && (counts[i / 3] == -1 || counts[i / 3] > counts[i] + 1)) counts[i / 3] = counts[i] + 1;
        if (!(i % 2) && (counts[i / 2] == -1 || counts[i / 2] > counts[i] + 1)) counts[i / 2] = counts[i] + 1;
        if (counts[i - 1] == -1 || counts[i - 1] > counts[i] + 1)counts[i - 1] = counts[i] + 1;
    }

    cout << counts[1] << '\n';

    return 0;
}