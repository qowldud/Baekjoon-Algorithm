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

void dfs(string s, vector<string>& answer) {
    answer.push_back(s);
    if (answer.size() == k + 1) {
        found = true;
        return;
    }
    int n = m[s];
    for (int i = 0; i < v[n].size(); i++) {
        if (!BOOL[n][i] && !found) {
            BOOL[n][i] = true;
            dfs(v[n][i], answer);
            if (found) return;
            BOOL[n][i] = false;
        }
    }
    answer.pop_back();
}

vector<string> solution(vector<vector<string>> tickets) {
    k = tickets.size();
    vector<string> answer;
    int count = 0;

    // 모든 도시를 인덱스로 매핑
    for (int i = 0; i < tickets.size(); i++) {
        if (m.find(tickets[i][0]) == m.end()) {
            m[tickets[i][0]] = count++;
        }
        if (m.find(tickets[i][1]) == m.end()) {
            m[tickets[i][1]] = count++;
        }
    }

    // 그래프 및 BOOL 벡터 초기화
    for (int i = 0; i < tickets.size(); i++) {
        int u = m[tickets[i][0]];
        v[u].push_back(tickets[i][1]);
    }

    // BOOL 벡터 크기 조정 및 초기화
    for (int i = 0; i < count; i++) {
        BOOL[i] = vector<bool>(v[i].size(), false);
        sort(v[i].begin(), v[i].end());
    }

    dfs("ICN", answer);

    return answer;
}