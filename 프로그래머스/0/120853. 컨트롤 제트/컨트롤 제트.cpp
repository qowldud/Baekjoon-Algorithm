#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string s) {
    int answer = 0;
    vector<string> v;
    stringstream ss(s);
    string s1;
    while(ss >> s1){
        v.push_back(s1);
    }
    
    for(int i=0;i<v.size();i++){
        if(v[i].compare("Z") == 0){
            answer -= stoi(v[i-1]);
        }else{
            answer += stoi(v[i]);
        }
    }
    return answer;
}