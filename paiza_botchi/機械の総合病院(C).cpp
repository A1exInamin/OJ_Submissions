/**
 * 機械の総合病院 [MISSION LEVEL: C]
 * https://paiza.jp/botchi/challenges/botchi_c_3002
 * 状態：CLEAR
 */
#include <bits/stdc++.h>
using namespace std;

void invalid()
{
  cout << "Invalid" << endl;
  exit(0);
}

int main()
{
  char pwd[31];
  cin >> pwd;
  int len = strlen(pwd);
  for (int i = 0; i < len; i++)
  {
    if (pwd[i] >= 'A' && pwd[i] <= 'Z')
      pwd[i] += 32;
  }
  if (len < 6)
    invalid();
  int flag = 0;
  for (int i = 0; i < len; i++)
  {
    if (pwd[i] >= 'a' && pwd[i] <= 'z')
      flag += 1;
    else if (pwd[i] >= '0' && pwd[i] <= '9')
      flag += 2;
  }
  if (flag == len || flag == len * 2)
    invalid();
  flag = 0;
  for (int i = 1; i < len; i++)
  {
    if (pwd[i] == pwd[i - 1])
      flag++;
    if (flag >= 2)
      invalid();
  }
  cout << "Valid" << endl;
  return 0;
}
