#include <bits/stdc++.h>
using namespace std;
string s;
int arr[26];
int main() {
	cin >> s;
	fill(&arr[0], &arr[26], -1);
	for(int i = 0; i < s.size(); i++) {
		if(arr[s[i] - 'a'] == -1) arr[s[i] - 'a'] = i;
	}
	for(int i = 0; i < 26; i++) {
		cout << arr[i] <<' ';
	}
	return 0;
}