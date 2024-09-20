#include <bits/stdc++.h>

using namespace std;
int n;
int f[1001];//记录每个数字的个数 
int main()
{
    int n;
    cin >> n;
    f[0] = f[1] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i/2 ; j++)
        {
            f[i] += f[j];
        }           
        if (i > 1)
        {
            f[i]++;
        }
        
    }
    cout << f[n];
    
}
