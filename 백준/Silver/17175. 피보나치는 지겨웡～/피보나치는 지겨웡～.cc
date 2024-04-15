#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    if (n <= 1)
    {
        cout << 1 << '\n';
        return 0;
    }
    int Array[n + 1];
    Array[0] = 1;
    Array[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        Array[i] = (Array[i - 2] + Array[i - 1] + 1) % 1000000007;
    }
    cout << Array[n] << '\n';
}