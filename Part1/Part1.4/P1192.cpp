// https://www.luogu.com.cn/problem/P1192
#include <bits/stdc++.h>
using namespace std;
int n, k;
int f[100005];
int main()
{
    cin >> n >> k;
    f[0] = f[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= k && j <= i; j++)
        {
            f[i] = (f[i] + f[i - j]) % 100003;
        }
    }
    cout << f[n] << endl;
    return 0;
}