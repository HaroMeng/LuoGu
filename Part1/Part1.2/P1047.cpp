// 校门外的树 https://www.luogu.com.cn/problem/P1047
#include <iostream>
#define N 10001
using namespace std;
int main()
{
    int l, m, a[N], x, y, z = 0; // l表示树的总数,m表示移走树的区域的个数
    cin >> l >> m;
    for (int i = 0; i <= l; i++)
    {
        a[i] = 1;
    }
    while (m)
    {
        cin >> x >> y;
        for (int i = x; i <= y ; i++)
        {
            a[i] = 0;
        }
        m--;
    }
    for (int i = 0; i <= l; i++)
    {
        if (a[i] == 1)
        {
            z++;
        }
    }
    cout << z;

    return 0;
}