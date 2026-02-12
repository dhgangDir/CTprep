#include<bits/stdc++.h>
using namespace std;
const int max_n = 200004;
int n, k, visited[max_n];
int main(){
    cin >> n >> k;
    visited[n] = 1;
    queue<int> q;
    q.push(n);
    while(!visited[k] && q.size()){
        int here = q.front();
        q.pop();
        if(here + 1 <= k * 2 && !visited[here + 1]){
            visited[here + 1] = visited[here] + 1;
            q.push(here + 1);
        }
        if(here - 1 >= 0 && !visited[here - 1]){
            visited[here - 1] = visited[here] + 1;
            q.push(here - 1);
        }
        if(here * 2 <= k * 2 && !visited[here * 2]){
            visited[here * 2] = visited[here] + 1;
            q.push(here * 2);
        }
    }
    cout << visited[k] - 1 << '\n';
    return 0;
}