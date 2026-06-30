#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool good(ll x)
{
    set<int> s;
    while (x)
    {
        s.insert(x % 10);
        x /= 10;
    }
    return s.size() <= 2;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> cand;

    // Generate all good numbers up to 9999
    for (int i = 2; i <= 9999; i++)
    {
        if (good(i))
            cand.push_back(i);
    }

    int T;
    cin >> T;

    while (T--)
    {
        ll x;
        cin >> x;

        for (int y : cand)
        {
            if (good(x * y))
            {
                cout << y << '\n';
                break;
            }
        }
    }

    return 0;
}
