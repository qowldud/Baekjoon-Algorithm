#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    int Array[N + M];

    for (int i = 0; i < N + M; i++)
    {
        cin >> Array[i];
    }

    sort(Array, Array + N + M);

    for (int i = 0; i < N + M; i++)
    {
        cout << Array[i] << " ";
    }
}