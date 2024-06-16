#include <iostream>
#include <vector>
using namespace std;

int solution(int n, vector<int> stations, int w){
    int answer = 0;
    int current = 1;
    int range = 2*w + 1;
    
    for(int station: stations){
        int start = station - w;
        int end = station + w;
        if(current < start){
            answer += (start-current + range - 1) / range;
        }
        current = end + 1;
    }
    if(current <=n){
        answer += (n-current + range) / range;
    }
    return answer;
}