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
         int cnt1 = 0;
        for (char c : s)
        {
            if (c == '1')
                cnt1++;
        }

        int cnt0 = n - cnt1;

        vector<int> ans;

        if (cnt1 % 2 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '1')
                    ans.push_back(i + 1);
            }
        }
        else if (cnt0 % 2 == 1)
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '0')
                    ans.push_back(i + 1);
            }
        }
        else
        {
            cout << -1 << '\n';
            continue;
        }

        cout << ans.size() << '\n';
        for (int x : ans)
            cout << x << " ";
        cout << '\n';
    
    }

    return 0;
}
