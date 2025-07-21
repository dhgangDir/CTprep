#include <iostream>

using namespace std;

int n, max_number, min_number;
int input_number;

int main() {
    cin >> n >> input_number;

    max_number = min_number = input_number;
    while (--n) {
        cin >> input_number;
        if (max_number < input_number) max_number = input_number;
        if (min_number > input_number) min_number = input_number;
    }

    cout << min_number << ' ' << max_number << '\n';

    return 0;
}