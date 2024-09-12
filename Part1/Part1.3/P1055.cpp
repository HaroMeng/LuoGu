// https://www.luogu.com.cn/problem/P1055
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string strIn;
    string strOut;
    cin >> strIn;
    for (auto ch : strIn)
    {
        if (ch == '-')
        {
            continue;
        }

        strOut += ch;
    }
    static int nums = 0;
    static int mult = 1;

    for_each(strOut.begin(), strOut.end() - 1, [](char ch)
             {
                int num = static_cast<int>(ch) - '0';
        int nums1 = num * mult;
        // cout << nums1 << endl;
        nums += nums1;
        mult++; });

    int flag = nums % 11;
    if (flag < 10)
    {
        if (flag == (static_cast<int>(strOut[strOut.size() - 1]) - '0'))
        {
            cout << "Right";
        }
        else
        {
            strIn[strIn.size() - 1] = flag + '0';
            cout << strIn;
        }
    }
    else
    {
        if ((strOut[strOut.size() - 1]) == 'X')
            cout << "Right";
        else
        {
            strIn[strIn.size() - 1] = 'X';
            cout << strIn;
        }
    }

    return 0;
}