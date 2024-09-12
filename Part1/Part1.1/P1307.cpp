#include <iostream>
using namespace std;
int main()
{
    int x, flag = 1;
    string str1 = "";
    cin >> x;
    if (x < 0)
        flag = -1;
    string str = to_string(x);
    for (char c : str)
    {
        str1 = c + str1;
    }
    cout << stoi(str1) * flag;
    return 0;
}