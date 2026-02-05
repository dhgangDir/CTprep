#include<bits/stdc++.h>
using namespace std;
long long N, B, n;
vector<vector<int>> v1;
vector<vector<int>> v2;
void cal(vector<vector<int>>& rst, vector<vector<int>> v1, vector<vector<int>> v2){
    vector<vector<int>> temp_rst(N, vector<int>(N, 0));
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            for(int k = 0; k < N; k++){
                temp_rst[i][k] += (v1[i][j] * v2[j][k]);
                temp_rst[i][k] %= 1000;
            }
        }
    }
    rst = temp_rst;
}        
void func(long long B, vector<vector<int>>& v){
    if (B == 1) {
        cal(v, v1, v2);
        return ;
    }
    func(B / 2, v);
    if(B%2){
        cal(v, v, v);
        cal(v, v, v1);
        return ;
    }
    cal(v, v, v);
    return ;
}
void input(int a, vector<vector<int>>& v){
    for(int i = 0; i < a; i++){
        vector<int> temp;
        for(int j = 0; j < a; j++){
            cin >> n;
            temp.push_back(n);
        }
        v.push_back(temp);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> N >> B;
    input(N, v1);
    for(int i = 0; i < N; i++){
        vector<int> temp;
        for(int j = 0; j < N; j++){
            if (i == j){
                temp.push_back(1);
            }
            temp.push_back(0);
        }
        v2.push_back(temp);
    }
    vector<vector<int>> rst(N, vector<int>(N, 0));
    func(B, rst);
    for(auto i : rst){
        for(auto j : i){
            cout << j << ' ';
        }
        cout << '\n';
    }
    return 0;
}