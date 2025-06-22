#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> strlist) {
    vector<int> answer;
    
    for(int i=0;i<strlist.size(); i++){
        int a = strlist[i].length();
        answer.push_back(a);
    }
    return answer;
}