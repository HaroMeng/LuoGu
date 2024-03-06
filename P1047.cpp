#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;  // 读取x和y的值

    int a[y][2];  // 创建二维数组a，用于存储区间的起始值和结束值

    for (int i = 0; i < y; i++) {
        cin >> a[i][0] >> a[i][1];  // 读取每个区间的起始值和结束值

        int dif_value = a[i][1] - a[i][0];  // 计算当前区间的差值dif_value
        x -= (dif_value + 1);  // 将dif_value加到x上
    }

    cout << x + 2;  // 输出x+2的值

    return 0;
}
