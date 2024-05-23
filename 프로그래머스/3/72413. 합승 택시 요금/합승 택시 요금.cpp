#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;

const int INF = 100000000;

vector<int> Dij(int k, int n, vector<vector<int>>& d, vector<vector<int>>& v) {
    vector<bool> visited(n + 1, false);
    vector<int> dist(n + 1, INF);
    dist[k] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, k});

    while (!pq.empty()) {
        int currentDist = pq.top().first;
        int num = pq.top().second;
        pq.pop();

        if (visited[num]) continue;
        visited[num] = true;

        for (int i = 0; i < v[num].size(); i++) {
            int next = v[num][i];
            int nextDist = currentDist + d[num][next];

            if (dist[next] > nextDist) {
                dist[next] = nextDist;
                pq.push({nextDist, next});
            }
        }
    }

    return dist;
}

int solution(int n, int s, int a, int b, vector<vector<int>> fares) {
    vector<vector<int>> d(n + 1, vector<int>(n + 1, INF));
    vector<vector<int>> adj(n + 1);
    for (int i = 1; i <= n; i++) {
        d[i][i] = 0;
    }

    for (int i = 0; i < fares.size(); i++) {
        int u = fares[i][0];
        int v = fares[i][1];
        int cost = fares[i][2];
        d[u][v] = cost;
        d[v][u] = cost;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> dists = Dij(s, n, d, adj);
    vector<int> dista = Dij(a, n, d, adj);
    vector<int> distb = Dij(b, n, d, adj);

    int answer = INF;

    for (int i = 1; i <= n; i++) {
        if (answer > dists[i] + dista[i] + distb[i]) {
            answer = dists[i] + dista[i] + distb[i];
        }
    }

    return answer;
}

int main(void) {
    int n = 6, s = 4, a = 6, b = 2;
    vector<vector<int>> fares = {{4, 1, 10}, {3, 5, 24}, {5, 6, 2}, {3, 1, 41}, {5, 1, 24}, {4, 6, 50}, {2, 4, 66}, {2, 3, 22}, {1, 6, 25}};
    int result = solution(n, s, a, b, fares);
    cout << result << '\n';

    return 0;
}
