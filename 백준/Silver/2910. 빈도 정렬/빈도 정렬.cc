#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

bool com(pair<int, int> a, pair<int, int> b)
{
    return a.second > b.second;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, C;
    cin >> N >> C;
    vector<pair<int, int>> v;

    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        bool BOOL = true;
        for (int i = 0; i < v.size(); i++)
        {
            if (a == v[i].first)
            {
                v[i].second++;
                BOOL = false;
            }
        }
        if (BOOL)
        {
            v.push_back(make_pair(a, 1));
        }
    }

    stable_sort(v.begin(), v.end(), com);

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].second; j++)
        {
            cout << v[i].first << " ";
        }
    }
}