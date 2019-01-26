/**
 * 构成直角三角形的条件
 * Time Limit: 1000/1000MS (C++/Others) Memory Limit: 65536/65536KB (C++/Others)
 *
 * Result: Accepted
 * Time: 0ms
 * Memory: 580KB
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    int a, b, c;
    cin >> a >> b >> c;
    if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
      cout << "1" << endl;
    else
      cout << "0" << endl;
  }
}
