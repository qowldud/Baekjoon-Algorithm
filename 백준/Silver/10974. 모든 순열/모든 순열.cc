#include <iostream>

using namespace std;

int N;
int Array[9];
bool BOOL[9] = {
    false,
};

void dfs(int cnt)
{
    if (cnt == N)
    {
        for (int i = 0; i < N; i++)
        {
            cout << Array[i] << " ";
        }
        cout << '\n';
        return;
    }
    for (int i = 1; i <= N; i++)
    {
        if (BOOL[i] == false)
        {
            BOOL[i] = true;
            Array[cnt] = i;
            dfs(cnt + 1);
            BOOL[i] = false;
        }
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    dfs(0);
}