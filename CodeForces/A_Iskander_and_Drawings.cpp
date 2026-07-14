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

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int longest = 0, cnt = 0;

        for (char c : s)
        {
            if (c == '#')
            {
                cnt++;
                longest = max(longest, cnt);
            }
            else
            {
                cnt = 0;
            }
        }

        cout << (longest + 1) / 2 << '\n';
    }

    return 0;
}
