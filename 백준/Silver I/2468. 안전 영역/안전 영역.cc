#include <iostream>

using namespace std;

int N, MAX = 0, K;
int ARRAY[100][100];
bool BOOL[100][100];
void dfs(int i, int j)
{
    BOOL[i][j] = true;

    if (BOOL[i - 1][j] == false && ARRAY[i - 1][j] > K && (i - 1) >= 0)
        dfs(i - 1, j);
    if (BOOL[i + 1][j] == false && ARRAY[i + 1][j] > K && (i + 1) < N)
        dfs(i + 1, j);
    if (BOOL[i][j - 1] == false && ARRAY[i][j - 1] > K && (j - 1) >= 0)
        dfs(i, j - 1);
    if (BOOL[i][j + 1] == false && ARRAY[i][j + 1] > K && (j + 1) < N)
        dfs(i, j + 1);
}
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    int result = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> ARRAY[i][j];
            if (ARRAY[i][j] > MAX)
                MAX = ARRAY[i][j];
        }
    }
    for (int i = 0; i <= MAX; i++)
    {
        int count = 0;
        K = i;
        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < N; k++)
            {
                BOOL[j][k] = false;
            }
        }
        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < N; k++)
            {
                if (BOOL[j][k] == false && ARRAY[j][k] > K)
                {
                    dfs(j, k);
                    count++;
                }
            }
        }
        if (result < count)
            result = count;
    }
    cout << result << '\n';
}