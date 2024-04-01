#include <iostream>
#include <unordered_map>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    unordered_map<string, int> m;
    string s;
    cin >> s;

    for (int i = 1; i <= s.length(); i++)
    {
        for (int j = 0; j <= (s.length() - i); j++)
        {
            string s1 = s.substr(j, i);
            if (m.find(s1) == m.end())
                m.insert({s1, 1});
        }
    }

    cout << m.size() << '\n';
}