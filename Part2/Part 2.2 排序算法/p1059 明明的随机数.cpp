// https://www.luogu.com.cn/problem/P1059
#include <bits/stdc++.h>
using namespace std;
const int N = 105;
set<int> s;
int arr[N];
int main()
{

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        s.insert(arr[i]);
    }
    cout << s.size() << endl;
    while (!s.empty())
    {
        cout << *s.begin() << " ";
        s.erase(s.begin());
    }
}