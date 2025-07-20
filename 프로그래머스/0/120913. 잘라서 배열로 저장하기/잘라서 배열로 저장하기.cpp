#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    
    for(int i=0;i<my_str.length();i += n){
        string s;
        int k = i+n < my_str.length() ? i+n : my_str.length();
        
        for(int j=i;j<k;j++){
            s.push_back(my_str[j]);
        }
        answer.push_back(s);
    }
    return answer;
}