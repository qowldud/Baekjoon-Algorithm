#include <iostream>
#include <unordered_map>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num, result = 0;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        unordered_map<char, int> m;
        char c;
        bool BOOL = true;
        string s;
        cin >> s;

        for (int j = 0; j < s.length(); j++)
        {
            if (m.find(s[j]) == m.end())
            {
                c = s[j];
                m.insert({s[j], 0});
            }
            else
            {
                if (s[j] != c)
                {
                    BOOL = false;
                    break;
                }
            }
        }
        if (BOOL)
            result++;
    }
    cout << result;
}