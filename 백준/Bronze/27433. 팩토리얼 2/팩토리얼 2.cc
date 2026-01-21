#include <iostream>
using namespace std;

int main () {
    int n;
    long long fato = 1;
    cin >> n;
    
    if(n == 0) cout << fato;
    else{
        do{
            fato = fato * n;
            n--;
        }while(n != 0);
        cout << fato;
    }
}