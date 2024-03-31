#include <iostream>
#include <map>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    map<string, int> m;
    for (int i = 0; i < N; i++)
    {
        string s1;
        cin >> s1;
        string s2 = s1.substr(s1.find('.') + 1);
        if (m.find(s2) == m.end())
        {
            m.insert({s2, 1});
        }
        else
        {
            m[s2] += 1;
        }
    }

    for (auto iter = m.begin(); iter != m.end(); iter++)
    {
        cout << iter->first << " " << iter->second << '\n';
    }
}