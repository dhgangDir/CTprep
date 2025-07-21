#include <bits/stdc++.h>
using namespace std;
string s;
int a, n;
int main() {
	cin >> n >> s;
	for(char c : s) {
		a += (c - '0');
	}
	cout << a << '\n';
	return 0;
}