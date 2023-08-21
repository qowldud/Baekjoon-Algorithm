#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int N,M,V;
vector<int> list[1001];
bool _dfs[1001];
bool _bfs[1001];
void dfs(int cur){
    cout<<cur<<" ";
    _dfs[cur] = true;
    for(int vertex : list[cur]){
        if(!_dfs[vertex]){
            dfs(vertex);
        }
    }
}
void bfs(int start){
    queue<int> q;
    q.push(start);
    _bfs[start] = true;
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        cout<<cur<<" ";
        for(int vertex : list[cur]){
            if(!_bfs[vertex]){
                _bfs[vertex] = true;
                q.push(vertex);
            }
        }
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>N>>M>>V;

    for(int i=1;i<=M;i++){
        int source, dest;
        cin>>source>>dest;
        list[source].push_back(dest);
        list[dest].push_back(source);
    }
    for(int i=1;i<=N;i++){
        sort(list[i].begin(),list[i].end());
    }
    dfs(V);
    cout<<'\n';
    bfs(V);
}