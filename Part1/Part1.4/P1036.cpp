#include <bits/stdc++.h>
using namespace std;

int n, k, a[25], ans = 0;
// 判断是否为素数
bool isSushu(int a)
{     if (a < 2) return false; 
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}

void f(int flag, int num, int sum)
{
    if (num == 0)
    {
        if (isSushu(sum))
            ans++;
        return;
    }
    if (n - flag + 1 < num)
        return;
    for (int i = flag; i <= n; i++)
    {
        f(i + 1, num - 1, sum + a[i]);
    }
    return;
}

int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)

    {
        cin >> a[i];
    }
    f(1, k, 0);
    cout << ans;

    return 0;
}