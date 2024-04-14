#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int num;
    cin >> num;
    int step[num];
    int result[num];
    for (int i = 0; i < num; i++)
    {
        cin >> step[i];
    }

    result[0] = step[0];
    result[1] = step[0] + step[1];
    result[2] = step[2] + max(step[0], step[1]);
    for (int i = 3; i < num; i++)
    {
        result[i] = step[i] + max(step[i - 1] + result[i - 3], result[i - 2]);
    }

    cout << result[num - 1] << '\n';
}