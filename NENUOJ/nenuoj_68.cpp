/**
 * I want to mod M
 * Time Limit: 1000/1000MS (C++/Others) Memory Limit: 65536/65536KB (C++/Others)
 *
 * Result: Time Limit Exceeded
 * Time: 1064ms
 * Memory: 568KB
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int cas;
  cin >> cas;
  while (cas--)
  {
    int n, m;
    cin >> n >> m;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
      sum += i % m;
    }
    cout << sum << endl;
  }
}
