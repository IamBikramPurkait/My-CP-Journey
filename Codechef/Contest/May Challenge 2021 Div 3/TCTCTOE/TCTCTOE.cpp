#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        char arr[3][3];
        ll mX = 0, mO = 0, m_ = 0, win_X = 0, win_O = 0;
        for (ll i = 0; i < 3; i++)
        {
            for (ll j = 0; j < 3; j++)
            {
                char temp;
                cin >> arr[i][j];
                temp = arr[i][j];
                if (temp == 'X')
                    mX++;
                else if (temp == 'O')
                    mO++;
                else if (temp == '_')
                    m_++;
            }
        }
        if ((arr[0][0] == 'X') && (arr[0][1] == 'X') && (arr[0][2] == 'X'))
            win_X++;
        if ((arr[1][0] == 'X') && (arr[1][1] == 'X') && (arr[1][2] == 'X'))
            win_X++;
        if ((arr[2][0] == 'X') && (arr[2][1] == 'X') && (arr[2][2] == 'X'))
            win_X++;
        if ((arr[0][0] == 'X') && (arr[1][0] == 'X') && (arr[2][0] == 'X'))
            win_X++;
        if ((arr[0][1] == 'X') && (arr[1][1] == 'X') && (arr[2][1] == 'X'))
            win_X++;
        if ((arr[0][2] == 'X') && (arr[1][2] == 'X') && (arr[2][2] == 'X'))
            win_X++;
        if ((arr[0][0] == 'X') && (arr[1][1] == 'X') && (arr[2][2] == 'X'))
            win_X++;
        if ((arr[2][0] == 'X') && (arr[1][1] == 'X') && (arr[0][2] == 'X'))
            win_X++;

        if ((arr[0][0] == 'O') && (arr[0][1] == 'O') && (arr[0][2] == 'O'))
            win_O++;
        if ((arr[1][0] == 'O') && (arr[1][1] == 'O') && (arr[1][2] == 'O'))
            win_O++;
        if ((arr[2][0] == 'O') && (arr[2][1] == 'O') && (arr[2][2] == 'O'))
            win_O++;
        if ((arr[0][0] == 'O') && (arr[1][0] == 'O') && (arr[2][0] == 'O'))
            win_O++;
        if ((arr[0][1] == 'O') && (arr[1][1] == 'O') && (arr[2][1] == 'O'))
            win_O++;
        if ((arr[0][2] == 'O') && (arr[1][2] == 'O') && (arr[2][2] == 'O'))
            win_O++;
        if ((arr[0][0] == 'O') && (arr[1][1] == 'O') && (arr[2][2] == 'O'))
            win_O++;
        if ((arr[2][0] == 'O') && (arr[1][1] == 'O') && (arr[0][2] == 'O'))
            win_O++;

        if ((mO > mX) or (mX - mO > 1))
            cout << 3 << "\n";
        else if ((mX > mO && win_X == 1 && win_O == 0) or ((mX == mO) && win_O == 1 && win_X == 0) or (m_ == 0 && (win_O + win_X == 0)) or (m_ == 0 && win_X == 2))
            cout << 1 << "\n";
        else if (m_ > 0 && (win_X + win_O == 0))
            cout << 2 << "\n";
        else
            cout << 3 << "\n";
    }
        return 0;
    }