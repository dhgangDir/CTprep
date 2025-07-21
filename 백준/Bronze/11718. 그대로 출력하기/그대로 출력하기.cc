#include <iostream>
#include <string>

using namespace std;

string input_string;

int main() {
    while (getline(cin, input_string)) 
        cout << input_string << '\n';
    return 0;
}