#include <iostream>
using namespace std;
int main()
{
    int mon[12];
    for (int i = 0; i < 12; i++)
        cin >> mon[i];
    int free, sum = 300, count = 0, flag = 0, pay100;
    for (int i = 0; i < 12; i++)
    {
        count--;
        free = sum - mon[i];
        if (free < 0)
        {
            cout << count << endl;
            flag = 0;
            break;
        }
        if (free > 100)
        {
            pay100 = free / 100;
            flag += pay100;
            free %= 100;
        }
        sum = free + 300;
    }
    if (flag != 0)
        cout << (flag * 120 + free);
    return 0;
}
