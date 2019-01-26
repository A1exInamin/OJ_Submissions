/**
 * 水仙花数
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
  while (cin >> n)
  {
    int a = n / 100, b = n / 10 % 10, c = n % 10;
    if (a * a * a + b * b * b + c * c * c == n)
      cout << "Yes." << endl;
    else
      cout << "No." << endl;
  }
}
