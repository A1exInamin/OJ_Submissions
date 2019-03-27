/**
 * 摄氏温度转换为华氏温度
 * Time Limit: 1000/1000MS (C++/Others) Memory Limit: 65536/65536KB (C++/Others)
 *
 * Result: -
 * Time: 0ms
 * Memory: 584KB
 */

#include <iostream>
using namespace std;

int main()
{
  float c;
  while(cin >> c)
  {
    float f = 9 * c / 5 + 32;
    printf("celsius=%.6f,fahr=%.3f\n", c, f);
  }
  return 0;
}