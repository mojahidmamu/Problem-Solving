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
    string keyboard[3] = {"qwertyuiop", "asdfghjkl;", "zxcvbnm,./"};
    string original = "";
    if (c == 'L')
    {
        for (char ch : s)
        {
            for (int j = 0; j < 3; j++)
            {
                int pos = keyboard[j].find(ch);
                if (pos != string::npos)
                {
                    original += keyboard[j][pos + 1];
                    break;
                }
            }
        }
        cout << original << endl;
    }
    else if (c == 'R')
    {
        for (char ch : s)
        {
            for (int j = 0; j < 3; j++)
            {
                int pos = keyboard[j].find(ch);
                if (pos != string::npos)
                {
                    original += keyboard[j][pos - 1];
                    break;
                }
            }
        }
        cout << original << endl;
    }

    return 0;
}
