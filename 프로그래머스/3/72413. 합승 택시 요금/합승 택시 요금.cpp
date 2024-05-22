#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

const int INF = 100000000;

int solution(int n, int s, int a, int b, vector<vector<int>> fares){
  vector<vector<int>> d(n+1,vector<int>(n+1, INF));

  for(int i=1;i<=n;i++){
    d[i][i] = 0;
  }

  for(int i=0;i<fares.size();i++){
      int a = fares[i][0];
      int b = fares[i][1];
      int c = fares[i][2];
      d[a][b] = c;
      d[b][a] = c;
  }

  for(int k=1;k<=n;k++){
    for(int i=1;i<d.size();i++){
      for(int j=1;j<d[i].size();j++){
        if(d[i][j] > d[i][k] + d[k][j]){
          d[i][j] = d[i][k] + d[k][j];
        }
      }
    }
  }

  int answer = INF;

  for(int i=1;i<=n;i++){
    if(answer > d[s][i] + d[i][a] + d[i][b]){
      answer = d[s][i] + d[i][a] + d[i][b];
    }
  }
  
  return answer;
}