// https://www.luogu.com.cn/problem/P1427
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int num;
    vector<int> v;
    while (1)
    {
        cin >> num;
        if (num == 0)
        {
            break;
        }

        v.push_back(num);
    }
    vector<int> v2;
    reverse(v.begin(), v.end());

    for_each(v.begin(), v.end(), [](int element)
             { cout << element << " "; });

    return 0;
}