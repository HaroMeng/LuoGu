#include <iostream>
using namespace std;

int main()
{
    int a, b;         // a表示peter所拥有的烟的个数，b表示k个烟蒂可以更换一个烟
    cin >> a >> b;    // 输入
    int c = a, x = 0; // c作为一个循环条件，当所剩余的烟蒂不够换取一颗烟时循环结束，x用于记录换取的烟的数量
    while (c>=b)
    {

        c /= b; // 计算剩余的烟蒂可以换到几根烟
        x += c; // 将剩余的烟蒂数量加到换取的烟的数量上
        cout<<c;
    }
    cout << (x + a); // 输出总的烟的数量
    return 0;
}
