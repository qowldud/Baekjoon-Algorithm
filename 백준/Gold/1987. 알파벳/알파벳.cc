#include <iostream>

using namespace std;

int R, C;
char board[21][21];
bool BOOL[21][21] = {
    false,
};
bool visit[26] = {
    false,
};
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int MAX = 1;

void dfs(int n, int m, int count)
{
    if (count == R * C)
    {
        MAX = R * C;
        return;
    }
    if (visit[board[n][m] - 'A'] == 1 && !(n == 0 && m == 0))
    {
        if (MAX < count - 1)
            MAX = count - 1;
        return;
    }
    if (!(n == 0 && m == 0))
    {
        visit[board[n][m] - 'A'] = true;
    }
    for (int i = 0; i < 4; i++)
    {
        int x = n + dx[i];
        int y = m + dy[i];
        if (x >= 0 && y >= 0 && x < R && y < C && BOOL[x][y] == false)
        {
            BOOL[x][y] = true;
            dfs(x, y, count + 1);
            BOOL[x][y] = false;
        }
    }
    visit[board[n][m] - 'A'] = false;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> R >> C;
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> board[i][j];
        }
    }
    BOOL[0][0] = true;
    visit[board[0][0] - 'A'] = true;
    dfs(0, 0, 1);
    cout << MAX << '\n';
}