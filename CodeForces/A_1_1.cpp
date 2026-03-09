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

        int min_ones = 0;
        int max_ones = 0;

        // max
        max_ones = count(s.begin(), s.end(), '1');
        for (int i = 1; i < n - 1; i++)
        {
            if (s[i - 1] == '1' && s[i + 1] == '1' && s[i] == '0')
            {
                max_ones++;
            }
        }
        // min
        // int min_ones = 0;
        for (int i = 0; i < n;)
        {
            if (s[i] == '1')
            {
                int j = i;
                while (j < n && s[j] == '1')
                    j++;
                min_ones += min(2, j - i); // block contributes 1 if length 1, else 2
                i = j;
            }
            else
                i++;
        }

        cout << min_ones << " " << max_ones << endl;
    }

    return 0;
}
