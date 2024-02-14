#include <iostream>

using namespace std;

int island[50][50] = {
    0,
};
bool BOOL[50][50] = {
    false,
};
int w, h;
void dfs(int i, int j)
{
    BOOL[i][j] = true;
    if (BOOL[i - 1][j - 1] == false && island[i - 1][j - 1] == 1 && (i - 1) >= 0 && (j - 1) >= 0)
        dfs(i - 1, j - 1);
    if (BOOL[i - 1][j] == false && island[i - 1][j] == 1 && (i - 1) >= 0)
        dfs(i - 1, j);
    if (BOOL[i - 1][j + 1] == false && island[i - 1][j + 1] == 1 && (i - 1) >= 0 && (j + 1) < w)
        dfs(i - 1, j + 1);
    if (BOOL[i][j - 1] == false && island[i][j - 1] == 1 && (j - 1) >= 0)
        dfs(i, j - 1);
    if (BOOL[i][j + 1] == false && island[i][j + 1] == 1 && (j + 1) < w)
        dfs(i, j + 1);
    if (BOOL[i + 1][j - 1] == false && island[i + 1][j - 1] == 1 && (i + 1) < h && (j - 1) >= 0)
        dfs(i + 1, j - 1);
    if (BOOL[i + 1][j] == false && island[i + 1][j] == 1 && (i + 1) < h)
        dfs(i + 1, j);
    if (BOOL[i + 1][j + 1] == false && island[i + 1][j + 1] == 1 && (i + 1) < h && (j + 1) < w)
        dfs(i + 1, j + 1);
}
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (1)
    {
        int count = 0;
        cin >> w >> h;

        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                BOOL[i][j] = false;
            }
        }
        if (w == 0 && h == 0)
            exit(0);

        else
        {
            for (int i = 0; i < h; i++)
            {
                for (int j = 0; j < w; j++)
                {
                    cin >> island[i][j];
                }
            }

            for (int i = 0; i < h; i++)
            {
                for (int j = 0; j < w; j++)
                {
                    if (island[i][j] == 1 && BOOL[i][j] == false)
                    {
                        dfs(i, j);
                        count++;
                    }
                }
            }
        }
        cout << count << '\n';
    }
}