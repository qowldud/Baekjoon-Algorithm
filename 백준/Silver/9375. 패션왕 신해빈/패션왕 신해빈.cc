#include <iostream>
#include <unordered_map>

using namespace std;

int main(void)
{
    int T;
    cin >> T;

    while (T--)
    {
        unordered_map<string, int> m;
        int num;
        int result = 1;
        cin >> num;
        for (int i = 0; i < num; i++)
        {
            string s1, s2;
            cin >> s1 >> s2;
            if (m.find(s2) == m.end())
            {
                m.insert({s2, 1});
            }
            else
            {
                m[s2]++;
            }
        }
        for (auto iter = m.begin(); iter != m.end(); iter++)
        {
            result *= (iter->second + 1);
        }
        cout << result - 1 << '\n';
    }
}