#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    long long T[n + 1] = {
        0,
    };
    T[0] = 1;

    for (int i = 0; i <= n; i++)
    {
        int k = 0;
        for (int j = 0; j < i; j++)
        {
            T[i] += (T[k + j] * T[i - j - 1]);
        }
    }

    cout << T[n] << '\n';
}