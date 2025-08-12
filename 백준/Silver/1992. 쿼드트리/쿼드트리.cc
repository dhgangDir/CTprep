#include<bits/stdc++.h>
using namespace std;
const int max_n = 68;
int n;
bool a[max_n][max_n];
string m;
void dfs(int s, int e, int n){
    if (n == 0) return ;
    bool flag = true;
    for(int i = s; i < s + n; i++){
        for(int j = e; j < e + n; j++){
            if(a[s][e] != a[i][j]){
                flag = false;
                break;
            }
        }
    }
    if(flag) m += (a[s][e] + '0');
    else{
        m += '(';
        dfs(s, e, n / 2);
        dfs(s, e + n / 2, n / 2);
        dfs(s + n / 2, e , n / 2);
        dfs(s + n / 2, e + n / 2, n / 2);
        m += ')';
    }
    return ;
}
int main(){
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%1d", &a[i][j]);
        }
    }
    dfs(0, 0, n);
    cout << m << '\n';
    return 0;
}