#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;  // ��ȡx��y��ֵ

    int a[y][2];  // ������ά����a�����ڴ洢�������ʼֵ�ͽ���ֵ

    for (int i = 0; i < y; i++) {
        cin >> a[i][0] >> a[i][1];  // ��ȡÿ���������ʼֵ�ͽ���ֵ

        int dif_value = a[i][1] - a[i][0];  // ���㵱ǰ����Ĳ�ֵdif_value
        x -= (dif_value + 1);  // ��dif_value�ӵ�x��
    }

    cout << x + 2;  // ���x+2��ֵ

    return 0;
}
