#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

// Author: Abdullah all Mojahid

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char c;
    cin >> c;

    string s;
    cin >> s;

    // Print a line that contains the original message.
    string keyboard[3] = { "qwertyuiop", "asdfghjkl;", "zxcvbnm,./" };
    if (c == 'L')
    {
        for (int i = 0; i < s.size(); i++)
        {
            char ch = s[i];
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k <  3; k++)
                {
                    if (keyboard[j][k] == ch)
                    {
                        cout << keyboard[j][k + 1];
                        break;
                    }
                }
            }
        }
        cout << endl;
    }
    else if (c == 'R')
    {
        for (int i = 0; i < s.size(); i++)
        {
            char ch = s[i];
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < keyboard[j].size(); k++)
                {
                    if (keyboard[j][k] == ch)
                    {
                        cout << keyboard[j][k - 1];
                        break;
                    }
                }
            }
        }
        cout << endl;
    }

    return 0;
}
