#include <iostream>

using namespace std;

int N, M;

int arr[9] = {
    0,
};
bool BOOL[9] = {
    false,
};

void dfs(int cnt, int count)
{
    if (cnt == M)
    {
        for (int i = 0; i < M; i++)
        {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = count + 1; i <= N; i++)
    {
        if (!BOOL[i])
        {
            BOOL[i] = true;
            arr[cnt] = i;
            dfs(cnt + 1, i);
            BOOL[i] = false;
        }
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    dfs(0, 0);
}