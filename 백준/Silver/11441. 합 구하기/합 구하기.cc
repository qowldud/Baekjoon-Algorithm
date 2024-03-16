#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, T;
    cin >> N;

    int Sum[N + 1];
    Sum[0] = 0;

    for (int i = 1; i <= N; i++)
    {
        int a;
        cin >> a;
        Sum[i] = Sum[i - 1] + a;
    }

    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << Sum[b] - Sum[a - 1] << '\n';
    }
}