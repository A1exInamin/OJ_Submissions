/**
 * 成绩转换
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
  int t;
  while (cin >> t)
  {
    if (t >= 90 && t <= 100)
      printf("A\n");
    else if (t >= 80 && t <= 89)
      printf("B\n");
    else if (t >= 70 && t <= 79)
      printf("C\n");
    else if (t >= 60 && t <= 69)
      printf("D\n");
    else if (t >= 0 && t <= 59)
      printf("E\n");
    else
      printf("Score is error!\n");
  }
}
