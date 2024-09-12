#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int flag = 1;
    while (x > flag)
    {

        x -= flag;
        flag++;
    }
    int mol, den;
    if (flag % 2 == 0)
    {
        mol = x;
        den = flag - x + 1;
    }
    else
    {
        mol = flag - x + 1;
        den = x;
    }
    cout << mol << "/" << den;

    return 0;
}