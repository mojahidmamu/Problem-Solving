#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        if (k > n)
        {
            cout << -1 << "\n";
            continue;
        }
        if (k == n)
        {
            cout << 0 << "\n";
            continue;
        }

        queue<pair<long long, int>> q;
        unordered_set<long long> visited;

        q.push({n, 0});
        visited.insert(n);

        bool found = false;

        while (!q.empty())
        {

            pair<long long, int> p = q.front();
            long long x = p.first;
            int time = p.second;
            q.pop();

            if (x == k)
            {
                cout << time << "\n";
                found = true;
                break;
            }

            if (x < k)
                continue;

            long long a = x / 2;
            long long b = x - a;  

            if (visited.find(a) == visited.end())
            {
                visited.insert(a);
                q.push({a, time + 1});
            }

            if (visited.find(b) == visited.end())
            {
                visited.insert(b);
                q.push({b, time + 1});
            }
        }

        if (!found)
            cout << -1 << "\n";
    }

    return 0;
}
