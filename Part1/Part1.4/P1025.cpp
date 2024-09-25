// https://www.luogu.com.cn/problem/P1025
#include <bits/stdc++.h>
using namespace std;
#define N 205
int a[N][N];

int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        a[1][i] = 1;
    for (int i = 1; i <= k; i++)
    {
        for (int j = 2; j <= n; j++)
            if (i <= j)
            {
                a[i][j] = a[i - 1][j - 1] + a[i][j - i];
            }
    }
    cout << a[k][n];

    return 0;
}