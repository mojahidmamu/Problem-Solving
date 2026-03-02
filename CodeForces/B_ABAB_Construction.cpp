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
        string x;
        cin >> x;

        int l = 1, r = n;
        bool isSatisfies = true;

        for (int i = 0; i < n; i++)
        {
            char lc = (l % 2 ? 'a' : 'b');
            char rc = (r % 2 ? 'a' : 'b');

            if (x[i] == '?' || x[i] == lc)
            {
                if (lc == lc)
                {
                    l++;
                }
                else
                {
                    l++;
                }
            }
            else if (x[i] == rc)
            {
                r--;
            }
            else if (x[i] == lc)
            {
                l++;
            }
            else
            {
                isSatisfies = false;
                break;
            }
        }

        if (isSatisfies)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
