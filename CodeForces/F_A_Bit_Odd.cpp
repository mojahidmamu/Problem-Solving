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

        long long total_inversions = 0;
        long long ones_count = 0;

        // Count the total number of inversions in O(n)
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '1')
            {
                ones_count++;
            }
            else
            {
                total_inversions += ones_count;
            }
        }

        // If the total number of inversions is odd, Alice wins. Otherwise, Bob wins.
        if (total_inversions % 2 != 0)
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
