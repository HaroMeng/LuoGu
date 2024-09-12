// https://www.luogu.com.cn/problem/P2010

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

bool fun(int &date)
{
    string str = to_string(date);

    auto mid = std::next(str.begin(), str.size() / 2);
    for (std::string::iterator it = str.begin(); it != mid; it++)
    {
        if (*it != *(it + mid))
        {
            /* code */
        }
        
    }
}

int main()
{
    int date1, date2, num = 0;
    cin >> date1 >> date2;
    for (int i = date1; i <= date2; i++)
    {
        fun(i);
    }
    cout << num;

    return 0;
}
