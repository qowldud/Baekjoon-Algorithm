#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int created = 0, donut = 0, bar = 0, eight = 0, init;
vector<vector<int>> v(1000001);
vector<int> answer;

void dfs(int n) {
    if (v[n].empty()) {
        bar += 1;
        return;
    }
    if (v[n].size() == 2) {
        eight += 1;
        return;
    }
    if (v[n][0] == init) {
        donut += 1;
        return;
    }
        dfs(v[n][0]);
}

vector<int> solution(vector<vector<int>> edges) {
    vector<bool> BOOL(1000001, false);
    unordered_set<int> nodes;

    for (int i = 0; i < edges.size(); i++) {
        v[edges[i][0]].push_back(edges[i][1]);
        BOOL[edges[i][1]] = true;
        nodes.insert(edges[i][0]);
        nodes.insert(edges[i][1]);
    }

    for (int node : nodes) {
        if (!BOOL[node] && v[node].size() >= 2) {
            created = node;
            break;
        }
    }

    for (int i = 0; i < v[created].size(); i++) {
        init = v[created][i];
        dfs(v[created][i]);
    }

    answer = {created, donut, bar, eight};
    return answer;
}