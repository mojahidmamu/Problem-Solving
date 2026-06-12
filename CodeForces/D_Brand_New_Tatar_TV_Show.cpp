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
        int n, k;
        cin >> n >> k;

        vector<int> cnt(n + 2, 0);

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            cnt[x]++;
        }

        vector<char> win(n + 2, 0);
        deque<int> dq; // losing positions with cnt[pos] > 0

        for (int i = n; i >= 1; i--)
        {
            while (!dq.empty() && dq.front() > i + k)
            {
                dq.pop_front();
            }

            bool hasLosingReachable = !dq.empty();

            if (hasLosingReachable)
            {
                win[i] = 1;
            }
            else
            {
                win[i] = (cnt[i] % 2 == 0);
            }

            if (cnt[i] > 0 && !win[i])
            {
                dq.push_back(i);
            }
        }

        bool answer = false;
        for (int v = 1; v <= n; v++)
        {
            if (cnt[v] > 0 && win[v])
            {
                answer = true;
                break;
            }
        }

        cout << (answer ? "YES" : "NO") << '\n';
    }

    return 0;
}
