#include <iostream>
#define MAX 9

using namespace std;

int N, M;
int arr[MAX] = {
    0,
};
bool BOOL[MAX] = {
    false,
};

void dfs(int cnt)
{
    if (cnt == M)
    {
        for (int i = 0; i < M; i++)
        {
            cout << arr[i] << " ";
        }
        cout << '\n';
    }

    for (int i = 1; i <= N; i++)
    {
        if (!BOOL[i])
        {
            BOOL[i] = true;
            arr[cnt] = i;
            dfs(cnt + 1);
            BOOL[i] = false;
        }
    }
}

int main(void)
{
    cin >> N >> M;
    dfs(0);
}