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
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        bool can = true;

        for (int i = 0; i < k; i++)
        {
            int ones = 0;

            for (int j = i; j < n; j += k)
            {
                if (s[j] == '1')
                    ones++;
            }

            if (ones % 2 == 1)
            {
                can = false;
                break;
            }
        }

        cout << (can ? "YES" : "NO") << endl;
    }

    return 0;
}