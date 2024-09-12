// https://www.luogu.com.cn/problem/P2010

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int date1, date2, num =0;
    cin >> date1 >> date2;
    for (int i = date1; i <= date2; i++)
    {
        string str = to_string(i);
        string str1 = str;
         reverse(str.begin(), str.end());

        if (str == str1)
        {
            num++;
        }
        
    }
    cout << num;

    return 0;
}
