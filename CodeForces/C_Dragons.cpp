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

    int s, n;
    cin >> s >> n;
    vector<pair<ll, ll>> dragons(n);

    for (int i = 0; i < n; i++)
    {
        cin >> dragons[i].first >> dragons[i].second;
    }

    sort(dragons.begin(), dragons.end());

    for (int i = 0; i < n; i++)
    {
        if (s <= dragons[i].first)
        {
            cout << "NO\n";
            return 0;
        }

        s += dragons[i].second;
    }

    cout << "YES\n";

    return 0;
}
