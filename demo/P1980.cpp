#include <iostream>
#include <string>
using namespace std;
int main()
{
    int x, y, count = 0;
    string str = "";
    cin >> x >> y;
    while (x)
    {
        
        str += to_string(x);
        x--;
    }
    for (char c : str)
    {
        if (int(c) == '0'+y)
        {
            count++;
        }
        
    } 
    cout  << count;
    return 0;
}