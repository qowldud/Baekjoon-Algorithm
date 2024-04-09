#include <iostream>

using namespace std;

int main(void)
{
    int a, b;
    char c;
    cin >> a >> c >> b;

    if (a >= b)
    {
        for (int i = b; i > 0; i--)
        {
            if (a % i == 0 && b % i == 0)
            {
                cout << a / i << ":" << b / i;
                break;
            }
        }
    }
    else if (a < b)
    {
        for (int i = a; i > 0; i--)
        {
            if (a % i == 0 && b % i == 0)
            {
                cout << a / i << ":" << b / i;
                break;
            }
        }
    }
}