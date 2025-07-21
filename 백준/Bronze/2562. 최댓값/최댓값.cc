#include <iostream>
using namespace std;

int max_number, max_index, input_number;

int main() {
    for (int i = 0; i < 9; i++) {
        cin >> input_number;
        if (max_number < input_number) {
            max_number = input_number;
            max_index = i;
        }
    }

    cout << max_number << '\n';
    cout << max_index + 1<< '\n';

    return 0;
}