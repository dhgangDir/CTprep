#include <iostream>
using namespace std;

bool nums[42];
int cnt;

int main() {
    int n;
    while (cin >> n)
        if (!nums[n%42]) {
            nums[n%42] = true;
            cnt++;
        }

    cout << cnt << "\n";

    return 0;
}