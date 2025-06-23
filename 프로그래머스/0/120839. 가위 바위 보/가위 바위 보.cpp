#include <string>
#include <vector>

using namespace std;

string solution(string rsp) {
    string answer = "";
    
    for(int i=0;i<rsp.length(); i++){
        int a = rsp[i] - '0';
        if(a == 2){
            answer += '0';
        }else if(a == 0){
            answer += '5';
        }else{
            answer += '2';
        }
    }
    return answer;
}