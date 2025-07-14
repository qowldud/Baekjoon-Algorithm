#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    long long answer = 1;
    int a = 1;
    
    while(1){
        answer *= a;
        if(answer > n){
            a--;
            break;
        }
        a++;
    }
    
    return a;
}