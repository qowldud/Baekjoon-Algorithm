#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    bool array[101] = {false,};
    
    int k = sqrt(n);
    
    for(int i=2;i<=k;i++){
        if(!array[i]){
            for(int j=i*2;j<=100;j=j+i){
            array[j] = true;
        }
    }
    }
    
        for(int i=1;i<=n;i++){
        if(array[i]){
            answer++;
        }
    }
    
    return answer;
}