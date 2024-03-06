#include <iostream>
using namespace std;
int main()
{
    int a[10], n = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;
    for (int i = 0; i < 10; i++)
    {
        if (a[i] <= x + 30)
        {
            n++;
        }
    }
    cout<<n;
    return 0;
}