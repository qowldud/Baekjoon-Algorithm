#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n, m;
int Tomato[1000][1000];
bool BOOL[1000][1000];
vector<pair<int, int>> v;
queue<pair<int, int>> q;
int day = 0;

void bfs(int i, int j)
{
    BOOL[i][j] = true;
    q.push(make_pair(-1, -1));
    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        if (x == (-1) && y == (-1))
        {
            day++;
            if (!q.empty())
            {
                q.push(make_pair(-1, -1));
            }
        }
        else
        {
            if (!BOOL[x - 1][y] && Tomato[x - 1][y] == 0 && (x - 1) >= 0)
            {
                BOOL[x - 1][y] = true;
                Tomato[x - 1][y] = 1;
                q.push(make_pair(x - 1, y));
            }
            if (!BOOL[x + 1][y] && Tomato[x + 1][y] == 0 && (x + 1) < n)
            {
                BOOL[x + 1][y] = true;
                Tomato[x + 1][y] = 1;
                q.push(make_pair(x + 1, y));
            }
            if (!BOOL[x][y - 1] && Tomato[x][y - 1] == 0 && (y - 1) >= 0)
            {
                BOOL[x][y - 1] = true;
                Tomato[x][y - 1] = 1;
                q.push(make_pair(x, y - 1));
            }
            if (!BOOL[x][y + 1] && Tomato[x][y + 1] == 0 && (y + 1) < m)
            {
                BOOL[x][y + 1] = true;
                Tomato[x][y + 1] = 1;
                q.push(make_pair(x, y + 1));
            }
        }
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    bool B, C = false;
    cin >> m >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            BOOL[i][j] = false;
            cin >> Tomato[i][j];
            if (Tomato[i][j] == 0)
                B = true;
            if (Tomato[i][j] == 1)
            {
                q.push(make_pair(i, j));
            }
        }
    }
    if (!B)
    {
        if (q.empty())
        {
            cout << -1 << '\n';
        }
        else
        {
            cout << 0 << '\n';
        }
        exit(0);
    }

    bfs(q.front().first, q.front().second);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (Tomato[i][j] == 0)
                C = true;
        }
    }
    if (C)
    {
        cout << -1 << '\n';
    }
    else
    {
        cout << day - 1 << '\n';
    }
}