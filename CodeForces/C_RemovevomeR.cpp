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

        int changes = 0;
        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[i - 1])
            {
                changes++;
            }
        }

        cout << (changes == 1 ? 2 : 1) << '\n';
    }

    return 0;
}
