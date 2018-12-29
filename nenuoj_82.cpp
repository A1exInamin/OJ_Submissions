/**
 * 单数？双数？
 * Time Limit: 1000/1000MS (C++/Others) Memory Limit: 65536/65536KB (C++/Others)
 *
 * Result: Accepted
 * Time: 0ms
 * Memory: 584KB
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int cas;
  cin >> cas;
  while (cas--)
  {
    char n[70];
    cin >> n;
    int len = strlen(n);
    if ((n[len - 1] - '0') % 2 == 0)
      cout << "even" << endl;
    else
      cout << "odd" << endl;
  }
}
