// https://www.luogu.com.cn/problem/P1328
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, mark_A = 0, mark_B = 0, ansa = 0, ansb = 0;
    cin >> n >> a >> b;
    int x[a], y[b];
    int pan[5][5] = {{0, -1, 1, 1, -1},
                     {1, 0, -1, 1, -1},
                     {-1, 1, 0, -1, 1},
                     {-1, -1, 1, 0, 1},
                     {1, 1, -1, -1, 0}};
    for (int i = 0; i < a; i++)
        cin >> x[i];
    for (int i = 0; i < b; i++)
        cin >> y[i];
    for (int i = 0; i < n; i++)
    {
        int ra = x[mark_A], rb = y[mark_B];
        if (pan[ra][rb] == 1)
            ansa++;
        else if (pan[ra][rb] == -1)
            ansb++;
        mark_A++;
        mark_B++;
        if (mark_A == a)
            mark_A = 0;
        if (mark_B == b)
            mark_B = 0;
    }
    cout << ansa << " " << ansb;

    return 0;
}
