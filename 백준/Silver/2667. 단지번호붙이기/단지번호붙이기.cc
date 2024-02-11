#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N = 0, num;
int ARRAY[25][25] = {
    0,
};
bool BOOL[25][25] = {
    false,
};

void dfs(int i, int j)
{
    BOOL[i][j] = true;
    N++;

    if ((BOOL[i - 1][j] == false) && (i - 1) >= 0 && ARRAY[i - 1][j] == 1)
    {
        dfs(i - 1, j);
    }
    if ((BOOL[i + 1][j] == false) && (i + 1) < num && ARRAY[i + 1][j] == 1)
    {
        dfs(i + 1, j);
    }
    if ((BOOL[i][j - 1] == false) && (j - 1) >= 0 && ARRAY[i][j - 1] == 1)
    {
        dfs(i, j - 1);
    }
    if ((BOOL[i][j + 1] == false) && (j + 1) < num && ARRAY[i][j + 1] == 1)
    {
        dfs(i, j + 1);
    }
}

int main(void)
{
    vector<int> v;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            char c;
            cin >> c;
            ARRAY[i][j] = c - '0';
        }
    }

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {

            if ((!BOOL[i][j]) && (ARRAY[i][j] == 1))
            {
                N = 0;
                dfs(i, j);
                v.push_back(N);
            }
        }
    }

    sort(v.begin(), v.end());

    cout << v.size() << '\n';
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << '\n';
    }
}