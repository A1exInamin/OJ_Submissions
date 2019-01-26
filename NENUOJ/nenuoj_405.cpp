/**
 * 四位数反转
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

int main()
{
  char a[4];
  while (cin >> a)
  {
    for (int i = 3; i >= 0; i--)
    {
      cout << a[i];
    }
    cout << endl;
  }
}
