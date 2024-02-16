#include <iostream>

using namespace std;

int N, M;
int Array[250][250] = {
    0,
};
void dfs(int i, int j)
{
    Array[i][j] = 0;
    if (Array[i - 1][j - 1] && (i - 1) >= 0 && (j - 1) >= 0)
    {
        dfs(i - 1, j - 1);
    }
    if (Array[i - 1][j] && (i - 1) >= 0)
    {
        dfs(i - 1, j);
    }
    if (Array[i - 1][j + 1] && (i - 1) >= 0 && (j + 1) < N)
    {
        dfs(i - 1, j + 1);
    }
    if (Array[i][j - 1] && (j - 1) >= 0)
    {
        dfs(i, j - 1);
    }
    if (Array[i][j + 1] && (j + 1) < N)
    {
        dfs(i, j + 1);
    }
    if (Array[i + 1][j - 1] && (i + 1) < M && (j - 1) >= 0)
    {
        dfs(i + 1, j - 1);
    }
    if (Array[i + 1][j] && (i + 1) < M)
    {
        dfs(i + 1, j);
    }
    if (Array[i + 1][j + 1] && (i + 1) < M && (j + 1) < N)
    {
        dfs(i + 1, j + 1);
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> M >> N;
    int count = 0;

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> Array[i][j];
        }
    }

    for (int i = 0; i < M; i++)
    {

        for (int j = 0; j < N; j++)
        {
            if (Array[i][j])
            {
                dfs(i, j);
                count++;
            }
        }
    }
    cout << count << '\n';
}