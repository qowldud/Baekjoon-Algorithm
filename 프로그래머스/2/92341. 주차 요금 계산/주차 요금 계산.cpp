#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> fees, vector<string> records) {
    vector<int> answer;
    map<string, int> m;
    vector<vector<int>> car (1000);
    int count = 0;
    for(int i=0;i<records.size();i++){
        string a,b,c;
        stringstream s1(records[i]);
        s1 >> a >> b >> c;
        if(m.find(b) == m.end()){
            m.insert({b, count++});
        } 
        int hour = (a[0] - '0') * 10 + (a[1] - '0');
        int minute = (a[3] - '0') * 10 + (a[4] - '0');
        int k = hour * 60 + minute;
        car[m[b]].push_back(k);
    }
    
    for(int i=0;i<count;i++){
        int n = m.begin() -> second;
        m.erase(m.begin());
        int sum = 0;
        if(car[n].size() % 2 == 0){
            for(int j = 0; j < car[n].size(); j+=2){
                sum += car[n][j+1] - car[n][j];
            }
            if(sum <= fees[0])answer.push_back(fees[1]);
            else {
                int ch = fees[1] + (((sum - fees[0]) + fees[2]-1)/fees[2]) * fees[3];
                answer.push_back(ch);
            }
        } else{
            for(int j = 0; j < car[n].size(); j+=2){
                if(j != car[n].size() - 1){
                    sum += car[n][j+1] - car[n][j];
                } else{
                    sum += 1439 - car[n][j];
                }
            }
            if(sum <= fees[0])answer.push_back(fees[1]);
            else {
                int ch = fees[1] + (((sum - fees[0]) + fees[2]-1)/fees[2]) * fees[3];
                answer.push_back(ch);
            }
        }
    }
    return answer;
}