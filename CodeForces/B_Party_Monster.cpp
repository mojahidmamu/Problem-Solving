#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

// Author: Abdullah all Mojahid

bool is_regular(const string &s)
{
    int bal = 0;
    for (char c : s)
    {
        if (c == '(')
            bal++;
        else
            bal--;
        if (bal < 0)
            return false;
    }
    return bal == 0;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        // Count total brackets
        int open = 0, close = 0;
        for (char c : s)
        {
            if (c == '(')
                open++;
            else
                close++;
        }

        if (open != close)
        {
            cout << "NO\n";
            continue;
        }

        // If already regular, YES
        if (is_regular(s))
        {
            cout << "YES\n";
            continue;
        }

        if (open == close)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
