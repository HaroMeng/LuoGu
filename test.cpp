#include <iostream>
#include <algorithm>

using namespace std;

const int N = 1e5 + 10;

struct Range
{
    int l,r;
    bool operator< (const Range&W)const
    {
        return l < W.l;
    }
}range[N];    //重载小于号，使其以左端点进行排序

int main()
{
    int n;
    cin >> n;
    for(int i = 0;i < n;i ++)
    {
        int l,r;
        scanf("%d%d",&l,&r);
        range[i] = {l,r};
    }

    sort(range,range + n);

    int res = 1;
    int maxr = range[0].r;
    for(int i = 1;i < n;i ++)
    {
        if(range[i].l <= maxr) maxr = max(maxr,range[i].r);
        else
        {
            res ++;
            maxr = range[i].r;
        }
    }

    cout << res << endl;

    return 0;
}
