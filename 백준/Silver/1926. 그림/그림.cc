#include <iostream>

using namespace std;

int picture[500][500] = {
    0,
};
bool BOOL[500][500] = {
    false,
};
int n, m, N;

void dfs(int i, int j)
{
    BOOL[i][j] = true;
    N++;
    if (BOOL[i - 1][j] == false && picture[i - 1][j] == 1 && (i - 1) >= 0)
    {
        dfs(i - 1, j);
    }
    if (BOOL[i + 1][j] == false && picture[i + 1][j] == 1 && (i + 1) < n)
    {
        dfs(i + 1, j);
    }
    if (BOOL[i][j - 1] == false && picture[i][j - 1] == 1 && (j - 1) >= 0)
    {
        dfs(i, j - 1);
    }
    if (BOOL[i][j + 1] == false && picture[i][j + 1] == 1 && (j + 1) < m)
    {
        dfs(i, j + 1);
    }
}

int main(void)
{
    int count = 0, MAX = 0;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> picture[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            N = 0;
            if (BOOL[i][j] == false && picture[i][j] == 1)
            {
                dfs(i, j);
                count++;
                if (N > MAX)
                    MAX = N;
            }
        }
    }

    cout << count << '\n'
         << MAX;
}