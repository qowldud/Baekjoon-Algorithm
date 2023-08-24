#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int N,M,R,cou = 1;
vector<int> v[100001];
bool visit[100001];
int arr[100001];
queue<int> q;

void bfs(int start){
    visit[start] = true;
    arr[start] = cou;
    q.push(start);
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        for(int k : v[cur]){
            if(!visit[k]){
                cou++;
                visit[k] = true;
                arr[k] = cou;
                q.push(k);
            }
        }
    }
}
int main(void){
    cin>>N>>M>>R;
    for(int i=0;i<M;i++){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(int i=1;i<=N;i++){
        sort(v[i].begin(),v[i].end());
    }
    bfs(R);
    for(int i=1;i<=N;i++){
        cout<<arr[i]<<'\n';
    }
}