#include <iostream>
using namespace std;
int main()
{
    double sum = 0, k, n = 0;
    cin >> k;
    while (sum <= k)
    {
        n++;
        sum += (1.0 / n);
    }
    cout << n;
    return 0;
}