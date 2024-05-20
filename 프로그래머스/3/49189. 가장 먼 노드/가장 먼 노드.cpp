#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int solution(int n, vector<vector<int>> edge){
  int answer = 0;
  queue<int> q;
  vector<bool> BOOL (n+1,0);
  vector<int> distance (n+1,0);
  vector<vector<int>> v(n+1);
  for(int i=0;i<edge.size();i++){
    int a = edge[i][0];
    int b = edge[i][1];
    v[a].push_back(b);
    v[b].push_back(a);
  }

  BOOL[1] = true;
  q.push(1);
  distance[1] = 0; 
  while(!q.empty()){
    int k = q.front();
    q.pop();
    for(int i=0;i<v[k].size();i++){
      if(!BOOL[v[k][i]]){
      q.push(v[k][i]);
      BOOL[v[k][i]] = true;
      distance[v[k][i]] = distance[k] +1;
      }
    }
  }
  sort(distance.begin(),distance.end(),greater<int>());
  
  for(int i=0;i<distance.size();i++){
    if(distance[0] == distance[i])answer++;
  }  
  return answer;
}

int main(void){
  vector<vector<int>> edge = {{3,6},{4,3},{3,2},{1,3},{1,2},{2,4},{5,2}};
  int n = 6;
  int result = solution(n, edge);
  cout<<result<<'\n';
}