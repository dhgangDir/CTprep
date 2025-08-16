#include<bits/stdc++.h>
using namespace std;
int n, c, a;
map<int, int> mp, mp1;
vector<int> v;
bool cmp(int a, int b){
    if(mp1[a] == mp1[b]) return mp[a] < mp[b];
    return mp1[a] > mp1[b];
}
int main(){
    cin >> n >> c;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(mp.find(a) == mp.end()){
            mp[a] = mp.size();
            v.push_back(a);
        }
        mp1[a] += 1;
    }
    sort(v.begin(), v.end(), cmp);
    for(int i : v){
        for(int j = 0; j < mp1[i]; j++){
            cout << i << ' ';
        }
    }
    cout << '\n';
    return 0;
}