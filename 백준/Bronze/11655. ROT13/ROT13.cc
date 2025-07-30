#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    getline(cin, s);
    for(char c : s){
        if (c >= 'a' and c <= 'z') 
            cout << char(((c - 'a' + 13) % 26) + 'a');
        else if (c >= 'A' and c <= 'Z')
            cout << char(((c - 'A' + 13) % 26) + 'A');
        else
            cout << c;
    }
    return 0;
}