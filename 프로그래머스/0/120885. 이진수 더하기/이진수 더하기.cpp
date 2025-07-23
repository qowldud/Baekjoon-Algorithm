#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string bin1, string bin2) {
    string answer = "";
    vector<int> v1;
    vector<int> v2;
    vector<int> result;
    int k = 0;
    
    for(int i=bin1.length()-1;i>=0;i--){
        int a = bin1[i] - '0';
        v1.push_back(a);
    }
    for(int i=bin2.length()-1;i>=0;i--){
        int a = bin2[i] - '0';
        v2.push_back(a);
    }
    
    int num = v1.size() > v2.size() ? v1.size() : v2.size();
    
    for(int i=0;i<num;i++){
        int a = v1.size() > i ? v1[i] : 0;
        int b = v2.size() > i ? v2[i] : 0;
        
        
        result.push_back((a+b+k)%2);
        k = (a+b+k)/2; 
    }
    
    if(k == 1){
        result.push_back(1);
    }
    
    for(int i=result.size()-1;i >= 0; i--){
        answer.push_back(result[i] + '0');
    }
    
    return answer;
}