#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N,M,R, cou = 1;
vector<int> v[100001];
bool visit[100001];
int arr[100001];

void dfs(int cur){
    visit[cur] = true;
    arr[cur] = cou;
    cou+=1;
    for(int k : v[cur]){
        if(!visit[k]){
            dfs(k);
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
    dfs(R);
    for(int i=1;i<=N;i++){
        cout<<arr[i]<<'\n';
    }
}