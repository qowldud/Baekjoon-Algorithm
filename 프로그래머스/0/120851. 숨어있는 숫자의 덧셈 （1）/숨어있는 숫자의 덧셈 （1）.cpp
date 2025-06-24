#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    
    for(int i=0;i<my_string.length();i++){
        int a = my_string[i] - '0';
        
        if(0 < a && a < 10){
            answer += a;
        }
    }
    
    return answer;
}