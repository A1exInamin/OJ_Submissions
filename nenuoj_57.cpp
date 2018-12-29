/**
 * 母牛的故事
 * Time Limit: 1000/1000MS (C++/Others) Memory Limit: 65536/65536KB (C++/Others)
 *
 * Result: Accepted
 * Time: 0ms
 * Memory: 576KB
 */
#include <bits/stdc++.h>
using namespace std;

int F(int n)
{
  if (n == 1)
    return 1;
  else if (n == 2)
    return 2;
  else if (n == 3)
    return 3;
  else if (n == 4)
    return 4;
  else if (n == 5)
    return 6;
  else
    return F(n - 1) + F(n - 3);
}

int main()
{
  int n;
  while (cin >> n)
  {
    if (n == 0)
      return 0;
    cout << F(n) << endl;
  }
}
