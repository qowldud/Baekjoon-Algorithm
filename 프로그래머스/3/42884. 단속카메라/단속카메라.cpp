#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool cmp(vector<int> a, vector<int> b){
    return a[1] < b[1];
}

int solution(vector<vector<int>> routes) {
    int answer = 0;
    sort(routes.begin(), routes.end(),cmp);
    int camera = -30001;
    
    for(int i=0;i<routes.size();i++){
        if(camera < routes[i][0]){
            answer += 1;
            camera = routes[i][1];
        }
}
    return answer;
}
