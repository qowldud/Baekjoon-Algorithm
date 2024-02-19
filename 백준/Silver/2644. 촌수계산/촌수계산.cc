#include <iostream>
#include <vector>

using namespace std;

vector<int> v[101];
int visit[101] = {
    0,
};
int n, x, y, m, ans;
void dfs(int x, int num)
{
    visit[x] += 1;
    if (x == y)
    {
        ans = num;
    }

    for (int i = 0; i < v[x].size(); i++)
    {
        if (!visit[v[x][i]])
        {
            dfs(v[x][i], num + 1);
        }
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> x >> y >> m;

    while (m--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    dfs(x, 0);

    if (visit[y] == 0)
        cout << -1 << '\n';
    else
        cout << ans << '\n';
}