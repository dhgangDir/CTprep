#include <iostream>
using namespace std;

string dice[7] = {
    "",
    "Yakk",
    "Doh",
    "Seh",
    "Ghar",
    "Bang",
    "Sheesh"
};

string double_dice[7] = {
    "",
    "Habb Yakk",
    "Dobara",
    "Dousa",
    "Dorgy",
    "Dabash",
    "Dosh"
};

int main() {
    int t, a, b;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> a >> b;
        cout << "Case " << i << ": ";
        if (a != b) {
            if ((a == 5 && b == 6) || (a == 6 && b == 5))
                cout << "Sheesh Beesh\n";
            else 
                cout << (a < b ? dice[b] + " " + dice[a] : dice[a] + " " + dice[b]) << '\n';
        } else {
            cout << double_dice[a] << '\n';
        }
    }
}