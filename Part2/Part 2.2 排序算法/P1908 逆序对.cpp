// https://www.luogu.com.cn/problem/P1908
// 求逆序对
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 5e5 + 10;
ll ans[N], tmp[N];
ll nums;
void merge_sort(ll q[], int l, int r)
{
    if (l >= r)
        return;
    ll mid = l + r >> 1;
    ll k = 0, i = l, j = mid + 1;
    merge_sort(q, l, mid);
    merge_sort(q, mid + 1, r);

    while (i <= mid && j <= r)
    {
        if (q[i] <= q[j])
            tmp[k++] = q[i++];
        else
            nums += mid - i + 1, tmp[k++] = q[j++];
    }
    while (i <= mid)
        tmp[k++] = q[i++];
    while (j <= r)
        tmp[k++] = q[j++];
    for (i = l, j = 0; i <= r; i++, j++)
        q[i] = tmp[j];
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> ans[i];

    merge_sort(ans, 1, n);
    cout << nums << endl;
    return 0;
}