#include <string>
#include <vector>

using namespace std;

int solution(int m, int n, vector<vector<int>> puddles) {
    int answer = 0;
    vector<vector<int>> v(n, vector<int>(m, 0));
    v[0][0] = 1;
    for(int i=0;i<puddles.size();i++){
        v[puddles[i][1]-1][puddles[i][0]-1] = -1;
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j] == -1)continue;
            if(i==0){
                if(j!=0){
                    if(v[i][j-1] == -1){
                        v[i][j] = 0;
                    }
                    else{
                        v[i][j] = v[i][j-1];
                    }

                }
            } else{
                if(j==0){
                    if(v[i-1][j] == -1){
                        v[i][j] = 0;
                    } else{
                        v[i][j] = v[i-1][j];
                    }

                } else{
                    if(v[i-1][j] != -1 && v[i][j-1] != -1){
                        v[i][j] = (v[i-1][j] + v[i][j-1])%1000000007;
                    }
                    else if(v[i-1][j] == -1){
                        v[i][j] = v[i][j-1];
                    } else if(v[i][j-1] == -1){
                        v[i][j] = v[i-1][j];
                    } else if(v[i-1][j] == -1 && v[i][j-1] == -1){
                        v[i][j] = 0;                    }

                }
            }
        }
    }
    
    answer = v[n-1][m-1];
    return answer;
}