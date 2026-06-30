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

        int first1 = -1, last0 = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1' && first1 == -1)
            {
                first1 = i;
            }
            if (s[i] == '0')
            {
                last0 = i;
            }
        }
        if (first1 == -1 || last0 == -1 || first1 > last0)
        {
            cout << "Bob\n";
            continue;
        }

        vector<int> pos;
        for (int i = 0; i + 1 < n; i++)
        {
            if (s[i] == '1' && s[i + 1] == '0')
            {
                pos.push_back(i);
            }
        }

        if (pos.size() != 1)
        {
            cout << "Alice\n";
            continue;
        }

        int idx = pos[0];

        int len1 = 0;
        int j = idx;
        while (j >= 0 && s[j] == '1')
        {
            len1++;
            j--;
        }

        int len2 = 0;
        int k = idx + 1;
        while (k < n && s[k] == '0')
        {
            len2++;
            k++;
        }

        bool ok = true;
        int firstOne = idx - len1 + 1;
        for (int p = 0; p < firstOne; p++)
        {
            if (s[p] != '0')
            {
                ok = false;
            }
        }
        int lastZero = idx + len2;
        for (int p = lastZero + 1; p < n; p++)
        {
            if (s[p] != '1')
            {
                ok = false;
            }
        }

        if (!ok || len1 < 2 || len2 < 2 || (len1 * len2) % 2 != 0)
        {
            cout << "Alice\n";
        }
        else
        {
            cout << "Bob\n";
        }
    }

    return 0;
}
