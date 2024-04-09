// https://www.luogu.com.cn/problem/P1151  P1151 子数整数
#include <iostream>
using namespace std;
int main()
{
    int k; // 定义一个正整数k
    cin >> k;
    int flag = 0;
    for (int i = 10000; i <= 30000; i++)
    {
        int a = i / 100,
            b = i / 10 % 1000,
            c = i % 1000;
            //
        if (((a % 100) == (b / 10) && (b % 100) == (c / 10)) && (a % k == 0 && c % k == 0 && b % k == 0))
        {
            cout << i << endl;
            flag = 1;
        }
    }
    if (flag == 0)
    {
        cout << "No";
    }
    return 0;
}