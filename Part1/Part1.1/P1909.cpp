#include <iostream>
using namespace std;

int fun(int x, int y, int z)
{
    int temp;
    if (x < y)
    {
        temp = x;
        x = y;
        y = temp;
    }
    if (x < z)
    {
        temp = x;
        x = z;
        z = temp;
    }
    if (y < z)
    {
        temp = y;
        y = z;
        z = temp;
    }
    return z;
}

int main()
{
    int f, x, y, m, n, p, q;
    int r, s, t;
    cin >> f >> x >> y >> m >> n >> p >> q;
    r = f / x + int(bool(f % x));
    s = f / m + int(bool(f % m));
    t = f / p + int(bool(f % p));
    int minNum = fun(r * y, s * n, t * q);
    cout << minNum;
    return 0;
}