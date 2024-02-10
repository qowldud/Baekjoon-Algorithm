#include <iostream>

using namespace std;

char array[100][100];
bool BOOL[100][100] = {
    false,
};

int count1 = 0, count2 = 0;

void dfsR(int i, int j)
{
    if (array[i - 1][j] == 'R' && (i - 1) >= 0)
    {
        if (BOOL[i - 1][j] == false)
        {
            BOOL[i - 1][j] = true;
            dfsR(i - 1, j);
        }
    }
    if (array[i + 1][j] == 'R' && (i + 1) < 100)
    {
        if (BOOL[i + 1][j] == false)
        {
            BOOL[i + 1][j] = true;
            dfsR(i + 1, j);
        }
    }
    if (array[i][j - 1] == 'R' && (j - 1) >= 0)
    {
        if (BOOL[i][j - 1] == false)
        {
            BOOL[i][j - 1] = true;
            dfsR(i, j - 1);
        }
    }
    if (array[i][j + 1] == 'R' && (j + 1) < 100)
    {
        if (BOOL[i][j + 1] == false)
        {
            BOOL[i][j + 1] = true;
            dfsR(i, j + 1);
        }
    }
}

void dfsB(int i, int j)
{
    if (array[i - 1][j] == 'B' && (i - 1) >= 0)
    {
        if (BOOL[i - 1][j] == false)
        {
            BOOL[i - 1][j] = true;
            dfsB(i - 1, j);
        }
    }
    if (array[i + 1][j] == 'B' && (i + 1) < 100)
    {
        if (BOOL[i + 1][j] == false)
        {
            BOOL[i + 1][j] = true;
            dfsB(i + 1, j);
        }
    }
    if (array[i][j - 1] == 'B' && (j - 1) >= 0)
    {
        if (BOOL[i][j - 1] == false)
        {
            BOOL[i][j - 1] = true;
            dfsB(i, j - 1);
        }
    }
    if (array[i][j + 1] == 'B' && (j + 1) < 100)
    {
        if (BOOL[i][j + 1] == false)
        {
            BOOL[i][j + 1] = true;
            dfsB(i, j + 1);
        }
    }
}

void dfsG(int i, int j)
{
    if (array[i - 1][j] == 'G' && (i - 1) >= 0)
    {
        if (BOOL[i - 1][j] == false)
        {
            BOOL[i - 1][j] = true;
            dfsG(i - 1, j);
        }
    }
    if (array[i + 1][j] == 'G' && (i + 1) < 100)
    {
        if (BOOL[i + 1][j] == false)
        {
            BOOL[i + 1][j] = true;
            dfsG(i + 1, j);
        }
    }
    if (array[i][j - 1] == 'G' && (j - 1) >= 0)
    {
        if (BOOL[i][j - 1] == false)
        {
            BOOL[i][j - 1] = true;
            dfsG(i, j - 1);
        }
    }
    if (array[i][j + 1] == 'G' && (j + 1) < 100)
    {
        if (BOOL[i][j + 1] == false)
        {
            BOOL[i][j + 1] = true;
            dfsG(i, j + 1);
        }
    }
}

void dfsRG(int i, int j)
{
    if (((array[i - 1][j] == 'R') || (array[i - 1][j] == 'G')) && (i - 1) >= 0)
    {
        if (!BOOL[i - 1][j])
        {
            BOOL[i - 1][j] = true;
            dfsRG(i - 1, j);
        }
    }
    if (((array[i + 1][j] == 'R') || (array[i + 1][j] == 'G')) && (i + 1) < 100)
    {
        if (!BOOL[i + 1][j])
        {
            BOOL[i + 1][j] = true;
            dfsRG(i + 1, j);
        }
    }
    if (((array[i][j - 1] == 'R') || (array[i][j - 1] == 'G')) && (j - 1) >= 0)
    {
        if (!BOOL[i][j - 1])
        {
            BOOL[i][j - 1] = true;
            dfsRG(i, j - 1);
        }
    }
    if (((array[i][j + 1] == 'R') || (array[i][j + 1] == 'G')) && (j + 1) < 100)
    {
        if (!BOOL[i][j + 1])
        {
            BOOL[i][j + 1] = true;
            dfsRG(i, j + 1);
        }
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num;
    cin >> num;
    count1 = 0, count2 = 0;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            cin >> array[i][j];
        }
    }

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (!BOOL[i][j])
            {
                BOOL[i][j] = true;
                if (array[i][j] == 'R')
                {
                    dfsR(i, j);
                    count1++;
                }
                else if (array[i][j] == 'B')
                {
                    dfsB(i, j);
                    count1++;
                }
                else if (array[i][j] == 'G')
                {
                    dfsG(i, j);
                    count1++;
                }
            }
        }
    }

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            BOOL[i][j] = false;
        }
    }
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (!BOOL[i][j])
            {
                BOOL[i][j] = true;
                if (array[i][j] == 'B')
                {
                    dfsB(i, j);
                    count2++;
                }
                else if ((array[i][j] == 'R') || (array[i][j] == 'G'))
                {
                    dfsRG(i, j);
                    count2++;
                }
            }
        }
    }

    cout << count1 << " " << count2;
}