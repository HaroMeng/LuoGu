// https://www.luogu.com.cn/problem/P5015

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    int nums = 0;
    for (auto ch : str)
    {
        if (ch != ' ')
        {
            nums++;
        }
    }
    cout
        << nums;
    return 0;
}