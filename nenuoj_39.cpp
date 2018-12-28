/**
 * 计算两点间距离
 * Time Limit: 1000/1000MS (C++/Others) Memory Limit: 65536/65536KB (C++/Others)
 *
 * Result: Accepted
 * Time: 0ms
 * Memory: 584KB
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
    double x1, y1, x2, y2;
    while(scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2) != EOF)
    {
        double res = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
        printf("%.2f\n", res);
    }
}
