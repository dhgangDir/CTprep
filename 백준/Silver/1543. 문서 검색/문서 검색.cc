#include <iostream>
#include <string>
using namespace std;

string docs, word;
int cnt;

void input() {
    getline(cin, docs);
    getline(cin, word);
}

void solution() {
    auto start = 0;
    auto end = docs.find(word);
    while (end != string::npos) {
        cnt++;
        start = end + word.size();        
        end = docs.find(word, start);
    } 
    cout << cnt << '\n';
}

void solve() {
    input();
    solution();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}