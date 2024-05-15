#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> triangle){
    int answer = 0;
    vector<vector<int>> result(triangle.size());
    result[0].push_back(triangle[0][0]);
    for(int i=1;i<triangle.size();i++){
        for(int j=0;j<triangle[i].size();j++){
            if(j == 0){
                result[i].push_back(triangle[i][j] + result[i-1][j]);
            } else if(j == triangle[i].size()-1){
                result[i].push_back(triangle[i][j] + result[i-1][j-1]);
            } else{
                result[i].push_back(max(result[i-1][j-1],result[i-1][j]) + triangle[i][j]);
            }
        }
    }

    sort(result[triangle.size()-1].begin(),result[triangle.size()-1].end(),greater<>());
    answer = result[triangle.size()-1][0];
    return answer;
}

int main(void){
    vector<vector<int>> triangle = {{7}, {3, 8}, {8, 1, 0}, {2, 7, 4, 4}, {4, 5, 2, 6, 5}};
    int s = solution(triangle);
    cout<<s<<'\n';
}