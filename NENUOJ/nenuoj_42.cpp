/**
 * 数据的交换输出
 * Time Limit: 1000/1000MS (C++/Others) Memory Limit: 65536/65536KB (C++/Others)
 *
 * Result: Accepted
 * Time: 0ms
 * Memory: 572KB
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  while (cin >> n)
  {
    if (n == 0)
      return 0;
    int num[100];
    for (int i = 0; i < n; i++)
      cin >> num[i];
    int minn = num[0], minpos = 0;
    for (int i = 0; i < n; i++)
    {
      if (num[i] < minn)
      {
        minn = num[i];
        minpos = i;
      }
    }
    swap(num[0], num[minpos]);
    for (int i = 0; i < n; i++)
    {
      if (i != 0)
        cout << " ";
      cout << num[i];
    }
    cout << endl;
  }
}
