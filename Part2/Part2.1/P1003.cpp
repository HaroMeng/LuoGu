#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 100000 + 5;
int numDitan;
int a[N], b[N], c[N], d[N];

int num = 0;
int m, n;
signed main()
{
    cin >> numDitan;
    for (int i = 0; i < numDitan; i++)
    {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }

    cin >> m >> n;

    for (int i = 0; i < numDitan; i++)
    {
        if (m >= a[i] && m <= a[i] + c[i] && n >= b[i] && n <= b[i] + d[i])
        {
            num = i + 1;
        }
    }
    if (num != 0)
        cout << num;
    else
        cout << -1;
    return 0;
}
