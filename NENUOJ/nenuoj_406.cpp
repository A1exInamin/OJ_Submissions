/**
 * 划分等级
 * Time Limit: 1000/1000MS (C++/Others) Memory Limit: 65536/65536KB (C++/Others)
 *
 * From Original NENU-OJ 1090, written on Mar 20, 2018
 *
 * Result: Accepted
 * Time: 4ms
 * Memory: 576KB
 */
#include <bits/stdc++.h>
using namespace std;

int gpa(int s, int c, int d)
{
  if (s < 60)
    return 0;
  else
    return (s - 60) * c * d;
}

int main()
{
  int s, c, d;
  while (cin >> s >> c >> d)
  {
    int g = gpa(s, c, d);
    if (g >= 0 && g <= 800)
      cout << "D" << endl;
    else if (g > 800 && g <= 1800)
      cout << "C" << endl;
    else if (g > 1800 && g <= 3200)
      cout << "B" << endl;
    else if (g > 3200)
      cout << "A" << endl;
  }
}
