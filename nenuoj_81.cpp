/**
 * ISBN
 * Time Limit: 1000/1000MS (C++/Others) Memory Limit: 65536/65536KB (C++/Others)
 *
 * Result: Wrong Answer
 * Time: 0ms
 * Memory: 584KB
 */
#include <bits/stdc++.h>
using namespace std;

int func(char a)
{
  return a - '0';
}

int main()
{
  char isbn[13];
  while (cin >> isbn)
  {
    int chksum = 0;
    int cnt = 1;
    for (int i = 0; i < 12; i++)
    {
      if (isbn[i] == '-')
        continue;
      else
      {
        chksum += cnt * (isbn[i] - '0');
        cnt++;
      }
    }
    chksum %= 11;
    if (chksum + '0' == isbn[12])
    {
      cout << "Right" << endl;
    }
    else
    {
      isbn[12] = chksum + '0';
      isbn[13] = '\0';
      cout << isbn << endl;
    }
  }
}
