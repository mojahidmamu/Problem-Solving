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
        vector<ll> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        vector<long long> groups[4];

        for (auto x : a)
        {
            bool div2 = (x % 2 == 0);
            bool div3 = (x % 3 == 0);
            if (div2 && div3)
            {
                groups[3].push_back(x);
            }
            else if (div2)
            {
                groups[1].push_back(x);
            }
            else if (div3)
            {
                groups[2].push_back(x);
            }
            else
            {
                groups[0].push_back(x);
            }
        }

        vector<long long> result;

        // Add all neutral numbers (group 0)
        for (auto x : groups[0])
        {
            result.push_back(x);
        }

        // Add the rest: numbers divisible by 2 or 3 or 6
        for (int g = 1; g <= 3; ++g)
        {
            for (auto x : groups[g])
            {
                result.push_back(x);
            }
        }

        // Output the reordered array
        for (int i = 0; i < n; ++i)
        {
            if (i > 0)
                cout << " ";
            cout << result[i];
        }
        cout << "\n";
    }

    return 0;
}
