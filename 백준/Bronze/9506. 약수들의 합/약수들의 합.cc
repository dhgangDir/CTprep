#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

void solution() {
    while (true) {
        int n;
        cin >> n;
        if (n == -1) break;
        vector<int> divisors = {1};
        int sum = 1, sqrt_n = (int)sqrt(n);
        for (int i = 2; i <= sqrt_n; ++i) {
            if (!(n % i)) {
                sum += i;
                divisors.push_back(i);
                if (i != n / i) {
                    sum += (n / i);
                    divisors.push_back(n / i);
                }
            }
        }
        if (sum == n) {
            sort(divisors.begin(), divisors.end());
            cout << n << " = ";
            for (int i = 0; i < divisors.size() - 1; ++i) {
                cout << divisors[i] << " + ";
            } 
            cout << divisors[divisors.size() - 1] << '\n';
        } else {
            cout << n << " is NOT perfect.\n";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solution();
    return 0;
}