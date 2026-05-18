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
        string s;
        cin >> s;
        int n = s.size();
        s = " " + s;  
        vector<int> prefix2(n + 1, 0);
        vector<int> prefix13(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            prefix2[i] = prefix2[i - 1];
            prefix13[i] = prefix13[i - 1];
            if (s[i] == '2')
                prefix2[i]++;
            else if (s[i] == '1' || s[i] == '3')
                prefix13[i]++;
        }
        int total13 = prefix13[n];
        int maxkeep = 0;
        for (int k = 0; k <= n; k++)
        {
            int keep = prefix2[k] + (total13 - prefix13[k]);
            if (keep > maxkeep)
                maxkeep = keep;
        }
        cout << n - maxkeep << endl;
    }

    return 0;
}
