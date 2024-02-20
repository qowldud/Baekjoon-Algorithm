#include <iostream>
#include <vector>

using namespace std;

vector<int> v[50];
int count = 0;
void dfs1(int n)
{
    for (int i = 0; i < v[n].size(); i++)
    {
        dfs1(v[n][i]);
    }
    v[n].clear();
}

void dfs2(int m)
{
    for (int i = 0; i < v[m].size(); i++)
    {
        if (v[v[m][i]].size() == 0)
        {
            count++;
        }
        else
            dfs2(v[m][i]);
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num, nd, k;
    vector<int> v1;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        int a;
        cin >> a;
        v1.push_back(a);

        if (a == -1)
        {
            k = i;
        }

        if (a != (-1))
        {
            v[a].push_back(i);
        }
    }
    cin >> nd;
    dfs1(nd);

    for (int i = 0; i < v[v1[nd]].size(); i++)
    {
        if (v[v1[nd]][i] == nd)
            v[v1[nd]].erase(v[v1[nd]].begin() + i);
    }
    dfs2(k);
    if (count == 0 && nd == k)
        cout << 0 << '\n';
    else if (count == 0 && nd != k)
        cout << 1 << '\n';
    else
        cout << count << '\n';
}