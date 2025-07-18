#include <iostream>
using namespace std;

int t, n_repeat;
string s;

int main() {
    cin >> t;

    while(t--) {
        cin >> n_repeat >> s;

        for (int i = 0; i < s.size(); i++) {
            for (int j = 0; j < n_repeat; j++) {
                cout << s[i];
            }
        }
        cout << '\n';
    }
    return 0;
}