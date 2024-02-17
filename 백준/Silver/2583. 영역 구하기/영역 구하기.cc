#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int BOOL[100][100] = {
    0,
};
int M, N, Count;

void dfs(int i, int j)
{
    BOOL[i][j] = 1;
    Count++;
    if (BOOL[i - 1][j] == 0 && (i - 1) >= 0)
        dfs(i - 1, j);
    if (BOOL[i + 1][j] == 0 && (i + 1) < M)
        dfs(i + 1, j);
    if (BOOL[i][j - 1] == 0 && (j - 1) >= 0)
        dfs(i, j - 1);
    if (BOOL[i][j + 1] == 0 && (j + 1) < N)
        dfs(i, j + 1);
}
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int num;
    vector<int> v;
    cin >> M >> N >> num;

    for (int i = 0; i < num; i++)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        for (int j = M - y2; j < M - y1; j++)
        {
            for (int k = x1; k < x2; k++)
            {
                BOOL[j][k] = 1;
            }
        }
    }

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (BOOL[i][j] == 0)
            {
                Count = 0;
                dfs(i, j);
                v.push_back(Count);
            }
        }
    }
    sort(v.begin(), v.end());
    cout << v.size() << '\n';
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}