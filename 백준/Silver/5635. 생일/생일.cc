#include <iostream>
#include <algorithm>

using namespace std;

class People
{
public:
    string name;
    int month;
    int day;
    int year;
};

bool Com(People a, People b)
{
    if (a.year == b.year)
    {
        if (a.month == b.month)
        {
            return a.day < b.day;
        }
        else
        {
            return a.month < b.month;
        }
    }
    else
    {
        return a.year < b.year;
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num;
    cin >> num;
    People p[num];

    for (int i = 0; i < num; i++)
    {
        cin >> p[i].name >> p[i].day >> p[i].month >> p[i].year;
    }

    sort(p, p + num, Com);

    cout << p[num - 1].name << '\n';
    cout << p[0].name;
}