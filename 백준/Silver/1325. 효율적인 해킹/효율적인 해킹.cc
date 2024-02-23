#include <iostream>
#include <queue>

using namespace std;

queue<int> q;
vector<int> v[10001];
bool visit[10001] = {
    false,
};
int num;

void bfs(int i)
{
    q.push(i);
    visit[i] = true;
    while (!q.empty())
    {
        int f = q.front();
        for (int j = 0; j < v[f].size(); j++)
        {
            if (!visit[v[f][j]])
            {
                q.push(v[f][j]);
                visit[v[f][j]] = true;
            }
        }
        q.pop();
        num++;
    }
}
int main(void)
{
    int N, M, MAX = 0;
    cin >> N >> M;
    int Array[N + 1] = {
        0,
    };

    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        v[b].push_back(a);
    }

    for (int i = 1; i <= N; i++)
    {
        num = 0;
        for (int j = 1; j <= N; j++)
        {
            visit[j] = false;
        }
        bfs(i);
        Array[i] = num;
        if (MAX < num)
            MAX = num;
    }

    for (int i = 1; i <= N; i++)
    {
        if (MAX == Array[i])
            cout << i << " ";
    }
}
