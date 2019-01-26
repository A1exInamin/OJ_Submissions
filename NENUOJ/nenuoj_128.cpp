/**
 * 素数
 * Time Limit: 1000/1000MS (C++/Others) Memory Limit: 65536/65536KB (C++/Others)
 *
 * From Original NENU-OJ 1090, written on Mar 20, 2018
 *
 * Result: Accepted
 * Time: 4ms
 * Memory: 580KB
 */
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
    int m, n;
    while(cin >> m >> n)
    {
        int cnt = 0, num[500];
        memset(num, 0, sizeof(num));
        for (int i = m; i <= n; i++)
        {
            int flag = 0;
            for (int j = 2; j <= i; j++)
            {
                if (i % j == 0)
                    flag++;
            }
            if (flag == 1)
            {
                num[cnt] = i;
                cnt++;
            }
        }
        for (int i = 1; i <= cnt; i++)
        {
            cout << num[i - 1];
            if (i % 7 != 0 && i != cnt)
                cout << " ";
            if (i % 7 == 0)
                cout << endl;
        }
        if (cnt % 7 != 0)
            cout << endl;
    }
    return 0;
}
