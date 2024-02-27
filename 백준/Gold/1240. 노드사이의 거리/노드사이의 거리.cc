#include <iostream>
#include <vector>

using namespace std;

int n, m, count = 0, a, b, result;
vector<int> v[1001];
int Distance[1001][1001] = {
    0,
};
bool BOOL[1001];

void dfs(int x, int c)
{
    BOOL[x] = true;
    for (int i = 0; i < v[x].size(); i++)
    {
        int k = v[x][i];
        if (!BOOL[k])
        {
            if (k == b)
            {
                result = c + Distance[x][k];
            }
            else
            {
                dfs(k, c + Distance[x][k]);
            }
        }
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    for (int i = 0; i < n - 1; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back(b);
        v[b].push_back(a);
        Distance[a][b] = c;
        Distance[b][a] = c;
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            BOOL[j] = false;
        }
        count = 0;
        cin >> a >> b;
        dfs(a, count);
        cout << result << '\n';
    }
}