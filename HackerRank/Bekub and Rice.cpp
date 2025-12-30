#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll w;
    cin >> n >> w;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<ll> divisor;
    for (ll i = 1; i * i <= w; i++)
    {
        if (w % i == 0)
        {
            divisor.push_back(i);
            if (i != w / i)
            {
                divisor.push_back(w / i);
            }
        }
    }

   
    unordered_set<ll> seen;
    seen.insert(0); 
    ll prefix = 0;
    for (int i = 0; i < n; i++)
    {
        prefix += arr[i];
        for (ll d : divisor)
        {
            if (seen.count(prefix - d))
            {
                cout << "YES" << endl;
                return 0;
            }
        }
        seen.insert(prefix);
    }

    cout << "NO" << endl;
    return 0;
}
