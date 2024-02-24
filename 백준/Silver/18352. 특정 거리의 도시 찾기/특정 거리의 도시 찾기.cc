#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int n, m, k, x;
queue<int> q;
vector<int> Node[300001];
vector<int> result;
int Array[300001];
bool visit[300001] = {
    false,
};

void bfs(int x)
{
    q.push(x);
    visit[x] = true;
    Array[x] = 0;
    while (!q.empty())
    {
        int n = q.front();
        for (int i = 0; i < Node[n].size(); i++)
        {
            int a = Node[n][i];
            if (!visit[a])
            {
                q.push(a);
                visit[a] = true;
                Array[a] = (Array[n] + 1);
                if (Array[a] == k)
                    result.push_back(a);
            }
        }
        q.pop();
    }
}
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m >> k >> x;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        Node[a].push_back(b);
    }
    bfs(x);

    sort(result.begin(), result.end());

    if (result.size() == 0)
    {
        cout << -1 << '\n';
    }
    else
    {
        for (int i = 0; i < result.size(); i++)
        {
            cout << result[i] << '\n';
        }
    }
}