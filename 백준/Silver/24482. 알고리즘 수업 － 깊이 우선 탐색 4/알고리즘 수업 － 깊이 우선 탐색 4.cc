#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M, R, Count = 0;
vector<int> v[100001];
int Array[100001];
bool BOOL[100001];
void dfs(int i, int Count)
{
    BOOL[i] = true;
    Array[i] = Count;
    for (int k = 0; k < v[i].size(); k++)
    {
        int a = v[i][k];
        if (!BOOL[a])
        {
            dfs(a, Count + 1);
        }
    }
}
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> M >> R;

    for (int i = 1; i <= N; i++)
    {
        Array[i] = -1;
        BOOL[i] = false;
    }

    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    for (int i = 1; i <= N; i++)
    {
        sort(v[i].begin(), v[i].end(), greater<>());
    }

    dfs(R, Count);

    for (int i = 1; i <= N; i++)
    {
        cout << Array[i] << '\n';
    }
}