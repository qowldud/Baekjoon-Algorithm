#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>

using namespace std;

bool Com(pair<string, int> &a, pair<string, int> &b)
{
    if (a.second == b.second)
    {
        if (a.first.length() == b.first.length())
        {
            return a.first < b.first;
        }
        else
        {
            return a.first.length() > b.first.length();
        }
    }
    else
    {
        return a.second > b.second;
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;
    unordered_map<string, int> m;

    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        if (s.length() >= M)
        {
            if (m.find(s) == m.end())
            {
                m.insert({s, 1});
            }
            else
            {
                m[s] += 1;
            }
        }
    }

    vector<pair<string, int>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), Com);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << '\n';
    }
}