/**
 * 隔離された街のゲート [MISSION LEVEL: B]
 * https://paiza.jp/botchi/challenges/botchi_b_2003
 * 状態：CLEAR
 */
#include <iostream>
using namespace std;
int main()
{
    int h, w, d, x = 0, y = 0;
    char op;
    cin >> h >> w >> d;
    for (int i = 0; i < d; i++)
    {
        cin >> op;
        if (op == 'U')
            y++;
        else if (op == 'D')
            y--;
        else if (op == 'L')
            x--;
        else if (op == 'R')
            x++;
        if (x >= w || x < 0 || y >= h || y < 0)
        {
            cout << "invalid" << endl;
            return 0;
        }
    }
    cout << "valid" << endl;
}
