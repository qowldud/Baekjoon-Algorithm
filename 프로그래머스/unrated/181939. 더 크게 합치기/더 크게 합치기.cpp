#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string a1 = to_string(a);
    string b1 = to_string(b);
    string result1 = a1 + b1;
    string result2 = b1 + a1;
    
    (stoi(result1) > stoi(result2)) ? answer = stoi(result1) : answer = stoi(result2);
    
    return answer;
}