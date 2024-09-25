// https://www.luogu.com.cn/problem/P5534

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long a1, a2, n, sum = 0;
    cin >> a1 >> a2 >> n;
    long d = a2 - a1;
    sum = n * a1 + (n * (n - 1) * d) / 2;
    cout << sum;
    return 0;
}