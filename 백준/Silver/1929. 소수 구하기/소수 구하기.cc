#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main () {
    int M, N, last;
    cin >> M >> N;

    vector<bool> sieve(N + 1, false);

    sieve[0] = sieve[1] = true;

    last = (int)pow((double)N, 0.5);

    for(int i = 2; i <= last; i++){
        if(sieve[i] != false){
            continue;
        }
        else{
            for(int j = 2; j * i <= N; j++){
                if(sieve[j*i] == false)
                    sieve[j*i] = true;
            }
        }
    }

    for(int check = M; check <= N; check++){
        if(sieve[check] != true){
            cout << check << '\n';
        }
    }
}