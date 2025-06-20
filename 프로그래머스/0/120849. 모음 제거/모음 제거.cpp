#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string answer = "";
    vector<char> v;
    v.push_back('a');
    v.push_back('e');
    v.push_back('i');
    v.push_back('o');
    v.push_back('u');
    
    for(int i=0;i<my_string.length();i++){
        char c = my_string[i];
        auto l = find(v.begin(), v.end(), c);
        if(l == v.end()){
            answer += c;
        }
    }
    return answer;
}