#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool array[100001];
vector<int> v[100001];
int pri[100001];
queue<int> q;
void bfs(int start){
    array[start] = true;
    q.push(start);
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        for(int k : v[cur]){
            if(!array[k]){
            array[k] = true;
            q.push(k);
            pri[k] = cur;
            }
        }
    }
}
int main(void){
    int num;
    cin>>num;
    for(int i=0;i<num-1;i++){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    bfs(1);
    for(int i=2;i<=num;i++){
        cout<<pri[i]<<'\n';
    }
}