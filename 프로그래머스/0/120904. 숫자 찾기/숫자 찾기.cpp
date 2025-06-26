#include <string>
#include <vector>


using namespace std;

int solution(int num, int k) {
    int answer = -1;
    
    string s = to_string(num);
    char c = k + '0';
    
    for(int i=0;i<s.length();i++){
        if(s[i] == c){
            answer = i + 1;
            return answer;
        }
    }
    
    return answer;
}