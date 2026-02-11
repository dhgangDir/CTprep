#include<bits/stdc++.h>
using namespace std;
const int max_n = 1004;
int n, m, s, u, v;
vector<int> adj[max_n];
bool visited[max_n];
void dfs(int y){
    visited[y] = 1;
    cout << y << ' ';
    for(int i : adj[y]){
        if(visited[i] == 0) dfs(i);
    }
    return ;
}
void bfs(int y){
    queue<int> q;
    visited[y] = 1;
    q.push(y);
    while(q.size()){
        int temp = q.front();
        q.pop();
        cout << temp << ' ';
        for(int i : adj[temp]){
            if(visited[i] == 0){
                visited[i] = 1;
                q.push(i);
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m >> s;
    for(int i = 0; i < m; i++){
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i = 0; i < n + 1; i++) sort(adj[i].begin(), adj[i].end());
    dfs(s);
    cout << '\n';
    memset(visited, 0, sizeof(visited));
    bfs(s);
    return 0;
}