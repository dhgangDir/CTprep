#include<bits/stdc++.h>
using namespace std;
const int max_n = 54;
const int dy[] = {-1, 0, 1, 0};
const int dx[] = {0, 1, 0, -1};
int t, n, m, k, a[max_n][max_n], y, x, cnt;
bool visited[max_n][max_n];
void dfs(int y, int x){
    visited[y][x] = 1;
    for(int i = 0; i < 4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny < 0 || ny >= n || nx < 0 || nx >= m || !a[ny][nx]) continue;
        if(visited[ny][nx]) continue;
        dfs(ny, nx);
    }
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    while(t--){
        cin >> m >> n >> k;
        while(k--){
            cin >> x >> y;
            a[y][x] = 1;            
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(visited[i][j] == 0 && a[i][j]){
                    dfs(i, j);
                    cnt++;
                }
            }
        }
        cout << cnt << '\n';
        cnt = 0;
        for(int i = 0; i < n; i++){
            memset(&a[i], 0, sizeof(a[i]));
            memset(&visited[i], 0, sizeof(visited[i]));
        }
    }
    return 0;
}