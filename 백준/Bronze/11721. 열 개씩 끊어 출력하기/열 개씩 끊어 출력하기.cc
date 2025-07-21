#include <iostream>

using namespace std;

string input_string;

int main() {
    cin >> input_string;

    for(int i = 0; input_string[i] != '\0'; i++) {
       if (i && !(i%10)) cout << '\n';
       cout << input_string[i];
    }
    cout << '\n';

    return 0;
}