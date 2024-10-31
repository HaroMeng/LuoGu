// 归并

#include <bits/stdc++.h>
using namespace std;

const int N = 10010 ;
int n;
int X[N],q[N];

void merge_sort(int X[], int l, int r)
{
    if(r<=l) return;
    int mid = l + r >> 1;
    merge_sort(X,l,mid);
    merge_sort(X,mid+1,r);
    int k = 0,i = l,j=mid+1;
    while (i <= mid && j <= r)
    {
        if(X[i] <= X[j]) q[k++] = X[i++];
        else q[k++] = X[j++];
    }
    while(i<=mid) q[k++] = X[i++];
    while(j <= r) q[k++] = X[j++];
    for(int i = l,j = 0; i <= r;i++,j++) X[i] = q[j];
    
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> X[i];
    merge_sort(X, 0, n);
    for (int i = 1; i <= n; i++)
        cout << X[i] << " ";

    return 0;
}
