#include <iostream>
#include <cstring>
using namespace std;
int shuzu[1001];
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int s[n + 1][m + 1];
    // 输入数据
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> s[i][j];

    
    for (int i = 1; i <= k; i++)
    {
        // 重置数组元素为0
        memset(shuzu, 0, sizeof(shuzu));
        for (int x = 1; x <= n; x++)
        {
            for (int y = 1; y <= m; y++)
            {
                if (s[x][y] == i)
                    shuzu[y] = 1;
            }
        }
        int ans = 0;
        for (int i = 1; i <= m; i++)
            if (shuzu[i])
                ans++;
        cout << ans << " ";
    }

    return 0;
}