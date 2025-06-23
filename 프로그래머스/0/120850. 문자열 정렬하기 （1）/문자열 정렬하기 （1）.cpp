#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    for(int i=0; i<my_string.size(); i++){
        int a = my_string[i] - '0';
        if(0 <= a && a <= 9){
            answer.push_back(a);
        }
    }
    
    sort(answer.begin(), answer.end());
    return answer;
}