/**
 * 众数问题
 * Time Limit: 1000/1000MS (C++/Others) Memory Limit: 65536/65536KB (C++/Others)
 *
 * From Original NENU-OJ 1090, written on Mar 20, 2018
 *
 * Result: Unsolved
 * Time: 4ms
 * Memory: 576KB
 */

// Currently under test

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int cas;
  cin >> cas;
  while (cas--)
  {
    int m;
    cin >> m;
    int num[101];
    for (int i = 0; i < m; i++)
    {
      cin >> num[i];
    }
    sort(num, num + m);
    int cnt[101], cntt = 0;
    memset(cnt, 0, sizeof(cnt));
    cnt[0] = 1;
    for (int i = 0; i < m; i++)
    {
      if (i != 0)
      {
        if (num[i] != num[i - 1])
        {
          cntt++;
          continue;
        }
      }
      cnt[cntt]++;
    }
    for (int i = 0; i < cntt; i++)
      cout << cnt[cntt] << endl;
  }
}
