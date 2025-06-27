#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    int answer = 0;
    string s = to_string(order);
    
    for(int i=0;i<s.length();i++){
        int a = s[i] - '0';
        if(a != 0 && a%3 == 0){
            answer++;
        }
    }
    return answer;
}