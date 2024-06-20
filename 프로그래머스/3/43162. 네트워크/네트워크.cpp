#include <string>
#include <vector>

using namespace std;



void dfs(int a, vector<bool>& visited, vector<vector<int>>& v){
        visited[a] = true;
        for(int i=0;i<v[a].size();i++){
            if(visited[v[a][i]] == false){
                dfs(v[a][i], visited, v);
            }

        }
}

int solution(int n, vector<vector<int>> computers) {
    vector<bool> visited(n, false);
    vector<vector<int>> v(n);
    int answer = 0;

    for(int i=0;i<computers.size();i++){
        for(int j=0;j<computers[i].size();j++){
            if(i==j)continue;
            if(computers[i][j] == 1){
                v[i].push_back(j);
            }
        }
    }
    
    for(int i=0;i<n;i++){
        if(visited[i] == false){
            dfs(i, visited, v);
            answer++;
        }
    }
    
    return answer;
}