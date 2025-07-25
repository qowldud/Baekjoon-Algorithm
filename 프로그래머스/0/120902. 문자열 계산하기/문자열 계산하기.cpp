#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    
    stringstream ss(my_string);
    
    string s;
    string k = "";
    while(ss >> s){
        if(s == "+"){
            k = "+";
        }else if(s == "-"){
            k = "-";
        }else{
            int a = stoi(s);
            if(k != ""){
                if(k == "+")answer += a;
                else answer -= a;
            }else{
                answer = a;
            }
        }
    }
    return answer;
}