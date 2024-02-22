#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v[100001];
int N;
int check[100001];

void dfs(int R, int depth)
{
    check[R] = depth;
    for (int i = 0; i < v[R].size(); i++)
    {
        int next = v[R][i];
        if (check[next] == -1)
            dfs(v[R][i], depth + 1);
    }
}
int main(void)
{
    int M, R;
    cin >> N >> M >> R;

    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    for (int i = 1; i <= N; i++)
    {
        sort(v[i].begin(), v[i].end());
        check[i] = -1;
    }

    dfs(R, 0);

    for (int i = 1; i <= N; i++)
    {
        cout << check[i] << '\n';
    }
}