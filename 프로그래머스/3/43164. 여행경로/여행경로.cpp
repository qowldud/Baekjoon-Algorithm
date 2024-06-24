#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;


map<string, int> m;
vector<vector<string>> v(10001);
vector<vector<bool>> BOOL(10001);
int k;
bool found = false;

void dfs(string s, vector<string>& answer){
    answer.push_back(s);
    if(answer.size() == k + 1){
        found = true;
        return ;
    }
    int n = m[s];
    for(int i=0;i<v[n].size();i++){
        if(!BOOL[n][i] && !found){
            BOOL[n][i] = true;
            dfs(v[n][i], answer);
            if(found) return ;
            BOOL[n][i] = false;
        }

    }
    answer.pop_back();

}

vector<string> solution(vector<vector<string>> tickets) {
    k = tickets.size();
    vector<string> answer;
    int count = 0;
    int number;
    
    for(int i=0;i<tickets.size();i++){
        if(m.find(tickets[i][0]) == m.end()){
            m.insert({tickets[i][0], count});
            v[count].push_back(tickets[i][1]);
            BOOL[count].push_back(false);
            count++;
            if(m.find(tickets[i][1]) == m.end()){
                m.insert({tickets[i][1], count});
                count++;
            }

        } else{
            v[m[tickets[i][0]]].push_back(tickets[i][1]);
            BOOL[m[tickets[i][0]]].push_back(false);
            if(m.find(tickets[i][1]) == m.end()){
                m.insert({tickets[i][1], count});
                count++;
            }
        }
    }
    
    for(int i=0;i<count;i++){
        sort(v[i].begin(), v[i].end());
    }
    
    dfs("ICN", answer);
    
    return answer;
}