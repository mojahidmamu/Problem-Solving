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
        vector<long long> A(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> A[i];
        }

        long long ans = 0;
        long long enter = A[1];

        for (int i = 2; i <= n; i++)
        {
            enter = max(enter, A[i]);
            ans += enter - A[i];
        }

        cout << ans << '\n';
    }

    return 0;
}
