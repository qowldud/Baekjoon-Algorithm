#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M, Count = 0;

int Array[101][101] = {
    0,
};
bool BOOL[101][101] = {
    false,
};

void dfs(int i, int j)
{
    BOOL[i][j] = true;
    Count++;
    if (BOOL[i - 1][j] == false && Array[i - 1][j] == 1 && (i - 1) >= 0)
        dfs(i - 1, j);
    if (BOOL[i + 1][j] == false && Array[i + 1][j] == 1 && (i + 1) <= N)
        dfs(i + 1, j);
    if (BOOL[i][j - 1] == false && Array[i][j - 1] == 1 && (j - 1) >= 0)
        dfs(i, j - 1);
    if (BOOL[i][j + 1] == false && Array[i][j + 1] == 1 && (j + 1) <= M)
        dfs(i, j + 1);
}
int main(void)
{
    int K;
    vector<int> v;
    cin >> N >> M >> K;

    for (int i = 0; i < K; i++)
    {
        int r, c;
        cin >> r >> c;

        Array[r][c] = 1;
    }

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            if (BOOL[i][j] == false && Array[i][j] == 1)
            {
                Count = 0;
                dfs(i, j);
                v.push_back(Count);
            }
        }
    }

    sort(v.begin(), v.end(), greater<>());

    cout << v[0] << '\n';
}