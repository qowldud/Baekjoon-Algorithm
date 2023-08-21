#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> v[1001];
bool array[1001];
queue<int> q;
int count = 0;
void bfs(int start){
    array[start] = true;
    q.push(start);
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        for(int k : v[cur]){
            if(!array[k]){
                q.push(k);
                array[k] = true;
            }
        }
    }
}
int main(void){
    int num1,num2;
    cin>>num1>>num2;
    for(int i=0;i<num2;i++){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(int i=1;i<=num1;i++){
        if(!array[i]){
            bfs(i);
            count += 1;
        }
    }
    cout<<count<<'\n';
}