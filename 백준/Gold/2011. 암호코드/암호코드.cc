#include <iostream>

using namespace std;

typedef long long ll;
#define MAX_LEN 5004
#define MODULER 1000000

string input_cipher;
ll dp[MAX_LEN], arr[MAX_LEN];
int cipher_len;

void input() {
    cin >> input_cipher;
    cipher_len = input_cipher.size();
    for (int i = 1; i <= input_cipher.size(); i++) {
        arr[i] = input_cipher[i - 1] - '0';
    }
}

int main() {
    input();
    if (cipher_len == 1 && input_cipher[0] == '0') {
        cout << 0 << '\n';
        exit(0);
    }

    dp[0] = 1;
    for (int i = 1; i <= cipher_len; i++) {
        if (arr[i] >= 1 && arr[i] <= 9)
            dp[i] = (dp[i - 1] + dp[i]) % MODULER;
        if (i >= 2) {
            int tmp = arr[i - 1] * 10 + arr[i];
            if (tmp >= 10 && tmp <= 26) 
                dp[i] = (dp[i - 2] + dp[i]) % MODULER;
        }
    }

    cout << dp[cipher_len] << '\n';

    return 0;
}