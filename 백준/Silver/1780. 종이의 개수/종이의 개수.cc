#include <iostream>
using namespace std;

int minus_one_counter, zero_counter, puls_one_counter;
int square[2200][2200];

void count(int number) {
    if (number == -1) minus_one_counter++;
    else if (number == 0) zero_counter++;
    else puls_one_counter++;
} 

void func(int n, int r, int c) {
    int i, j;
    int sample = square[r][c], partion = n / 3;
    bool flag = true;

    if (n == 1) {
        count(sample);
        return ;
    }

    for (i = r; i < r + n; i++) {
        for (j = c; j < c + n; j++) {
            if (sample != square[i][j]) {
                flag = false;
                break;
            }
        }
        if (!flag) break;
    }

    if (flag) 
        count(sample);

    else {
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                if (r + (i * partion) <= 0 && r + (i * partion) >= n) continue;
                if (c + (j * partion) <= 0 && c + (j * partion) >= n) continue;
                func(partion, r + i * partion, c + j * partion);
            }
        }
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
    
    int n;
    int i, j;

    cin >> n;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cin >> square[i][j];
        }
    }

    func(n, 0, 0);

    cout << minus_one_counter << '\n';
    cout << zero_counter << '\n';
    cout << puls_one_counter << '\n';

    return 0;
}