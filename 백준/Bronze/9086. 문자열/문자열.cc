#include <bits/stdc++.h>
using namespace std;
int t;
string s;
int main() {
	cin >> t;
	while(t--){
		cin >> s;
		cout << s[0] << s[s.size() - 1] << '\n';
	}
	return 0;
}