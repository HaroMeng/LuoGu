#include <bits/stdc++.h>
using namespace std;
double ans[3];
double a, b, c, d;
int sub;

int main()
{
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    for (double i = -100; i <= 100; i += 0.001)
    {
        if (!(sub ^ 3))
            break;
        double f = a * i * i * i + b * i * i + c * i + d;
        if (fabs(f) <= 0.001)
            ans[sub++] = i, i += 0.999;
    }
    printf("%.2lf %.2lf %.2lf", ans[0], ans[1], ans[2]);
    return 0;
}