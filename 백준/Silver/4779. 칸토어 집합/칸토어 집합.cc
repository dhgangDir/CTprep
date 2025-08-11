#include <iostream>
#include <cmath>
using namespace std;

void func(int n, int splite_len, int s, int e, string& bar) {
    int i;
    splite_len = splite_len / 3;
    if (n == 0) return ;

    for (i = s + splite_len; i < e - splite_len; i++) 
        bar[i] = ' ';
    func(n - 1, splite_len, s, s + splite_len, bar);
    func(n - 1, splite_len, e - splite_len, e, bar);
}

int main() {
    int n;
    int i;
    int split_len;
    string bar;

    while (cin >> n) {
        split_len = (int)pow(3, n);
        for (i = 0; i < split_len; i++)
            bar += '-';

        func(n, split_len, 0, split_len, bar);

        cout << bar << '\n';
        bar = "";
    }

    return 0;
}