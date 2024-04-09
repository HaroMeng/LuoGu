// P1085 [NOIP2004 普及组] 不高兴的津津 https://www.luogu.com.cn/problem/P1085
#include <iostream>
using namespace std;
int main()
{
    int a[7][2];
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> a[i][j];
        }
    }
    int x = 0;
    x = (a[0][0] + a[0][1]);
    for (int i = 0; i < 6; i++)
    {

        x = x > (a[i + 1][0] + a[i + 1][1]) ? x : (a[i + 1][0] + a[i + 1][1]);
    }

    int y;

    int flag = 0;
    for (int i = 0; i < 7; i++)
    {
        if (a[i][0] + a[i][1] > 8)
            flag = 1;
    }
    if (flag == 1)
    {
        for (int i = 0; i < 7; i++)
        {
            if (a[i][0] + a[i][1] == x)
            {
                y = i + 1;
                break;
            }
        }
        cout << y;
    }
    else
        cout << 0;

    return 0;
}