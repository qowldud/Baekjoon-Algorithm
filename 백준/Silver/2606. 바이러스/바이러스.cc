#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<int> v[101];
bool array[101];
int count = 0;
void bfs(int start){
    queue<int> q;
    q.push(start);
    array[start] = true;
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        for(int vertex : v[cur]){
            if(!array[vertex]){
                array[vertex] = true;
                q.push(vertex);
                count += 1;
            }
        }

    }
}
int main(void){
    int num1,num2;
    cin>>num1;
    cin>>num2;
    for(int i=0;i<num2;i++){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    bfs(1);
    cout<<count<<'\n';
}