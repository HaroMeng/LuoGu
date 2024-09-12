// 问题连接:https://www.luogu.com.cn/problem/P8598
#include <iostream>
#include <algorithm>
using namespace std;

const int N = 10005;
int n;
int a[N];
int cnt;
int ans1, ans2;

int main()
{
    cin >> n;
    while (cin >> a[cnt])
        cnt++;

    sort(a, a + cnt);

    for (int i = 0; i < cnt; i++)
    {
        if (a[i] == a[i + 1])
            ans2 = a[i];
        if (a[i + 1] - a[i] > 1)
            ans1 = a[i] + 1;
    }

    cout << ans1 << " " << ans2 << endl;

    return 0;
}