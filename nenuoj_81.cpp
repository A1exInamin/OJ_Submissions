/**
 * ISBN
 * Time Limit: 1000/1000MS (C++/Others) Memory Limit: 65536/65536KB (C++/Others)
 *
 * Result: Accepted
 * Time: 0ms
 * Memory: 576KB
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
  string str;
  while (cin >> str)
  {
    int sum = (str[0] - '0') * 1 + (str[2] - '0') * 2 + (str[3] - '0') * 3 + (str[4] - '0') * 4 + (str[6] - '0') * 5 + (str[7] - '0') * 6 + (str[8] - '0') * 7 + (str[9] - '0') * 8 + (str[10] - '0') * 9;
    int res = sum % 11;
    char c;
    if (res == 10)
      c = 'X';
    else c = res + '0';
    if (str[12] == c)
      cout << "Right" << endl;
    else
    {
      for (int i = 0; i < 12; i++)
        cout << str[i];
      cout << c << endl;
    }
  }
}
