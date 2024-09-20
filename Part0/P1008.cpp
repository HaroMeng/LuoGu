// https://www.luogu.com.cn/problem/P1008
#include <bits/stdc++.h>
using namespace std;

bool hasDuplicateChars(const std::string &s)
{
    std::unordered_set<char> charSet;
    for (char c : s)
    {
        if (c == '0')
        {
            return false;
        }
        if (!charSet.insert(c).second)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    for (int i = 123; i < 333; i++)
    {
        string str1 = to_string(i * 1);
        string str2 = to_string(i * 2);
        string str3 = to_string(i * 3);
        string str = str1 + str2 + str3;
        if (hasDuplicateChars(str))
        {
            cout << (str1) << " " << str2 << " " << str3 << " " << endl;
        }
    }
    return 0;
}

// #include <cstdio>
// #include <cstring>
// int i, j, v;
// bool a[10]; // ai表示第i个数已经用过了
// int main()
// {
//     for (i = 192; i <= 327; i++) // 第一个数最小192，最大327。其实不知道的情况下简单来说是从123-329的但是算出来是最值就稍微改了下下
//     {
//         memset(a, 0, sizeof(a));
//         v = 0;                                                                                                                                                   // 清零
//         a[i % 10] = a[i / 10 % 10] = a[i / 100] = a[i * 2 % 10] = a[i * 2 / 10 % 10] = a[i * 2 / 100] = a[i * 3 % 10] = a[i * 3 / 10 % 10] = a[i * 3 / 100] = 1; // 统计数字
//         for (j = 1; j <= 9; j++)
//             v += a[j]; // v表示1-9这些数字是否全部齐了
//         if (v == 9)
//             printf("%d %d %d\n", i, i * 2, i * 3); // 如果齐了就输出
//     }
//     return 0;
// }
