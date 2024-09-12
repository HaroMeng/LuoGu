// https://www.luogu.com.cn/problem/P5594
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    int arry[x][y];
    int arry1[1005][z];
    int sum[z];
    memset(arry1, 0, sizeof(arry1));
    memset(sum, 0, sizeof(sum));
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin >> arry[i][j];
            // cout << arry[i][j];
        }
    }

    for (int j = 0; j < y; j++)
    {
        for (int i = 0; i < x; i++)
        {
            arry1[j][arry[i][j] - 1] = bool(arry[i][j]);
        }
    }

    for (int i = 0; i < 1005; i++)
    {
        for (int j = 0; j < z; j++)
        {
            sum[j] += arry1[i][j];
        }
    }

    for (int k = 0; k < z; k++)
    {
        cout << sum[k] << " ";
    }

    return 0;
}