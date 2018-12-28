/**
 * 18岁生日
 * Time Limit: 1000/1000MS (C++/Others) Memory Limit: 65536/65536KB (C++/Others)
 *
 * Result: Accepted
 * Time: 0ms
 * Memory: 588KB
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int y, m, d;
    scanf("%d-%d-%d", &y, &m, &d);
    if (m == 2 && d == 29)
    {
      cout << "-1" << endl;
      continue;
    }
    int days = 18 * 365;
    int leapcnt = 0;
    for (int i = y; i <= y + 18; i++)
    {
      if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
        leapcnt++;
    }
    if (m > 2 && (((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)))
      leapcnt--;
    days += leapcnt;
    cout << days << endl;
  }
}
