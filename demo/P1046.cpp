#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> list(10);
    int n;
    
    // 读取 10 个整数
    for (int i = 0; i < 10; i++) {
        cin >> list[i];
    }
    
    // 读取阈值 n
    cin >> n;
    n += 30;
    
    // 统计小于或等于 n 的元素个数
    int count = count_if(list.begin(), list.end(), [n](int element) {
        return element <= n;
    });
    
    // 输出结果
    cout << count << endl;
    
    return 0;
}
