// https://www.luogu.com.cn/problem/P4994
#include <iostream>
using namespace std;
#define N 100000000
    long long a[N];
void fun()
{

    int m;
    cin >> m;
    a[0] = 0, a[1] = 1;
    for (long long i = 2; i < N; i++)
    {
        a[i] = (a[i - 1] + a[i - 2]) % m;
        if (a[i - 1] == 0 && a[i] == 1)
        {
            cout << i - 1;
            break;
        }
    }
}

int main()
{
    fun();

    return 0;
}
