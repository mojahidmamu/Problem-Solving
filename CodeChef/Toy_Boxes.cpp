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
        int N, K;
        cin >> N >> K;
        
        vector<long long> W(N);
        long long total = 0;

        for (int i = 0; i < N; i++)
        {
            cin >> W[i];
            total += W[i];
        }

        sort(W.begin(), W.end());

        int m = min(K, N - K);

        long long small = 0, large = 0;

        for (int i = 0; i < m; i++)
        {
            small += W[i];
            large += W[N - 1 - i];
        }

        cout << max(abs(total - 2 * small), abs(total - 2 * large)) << '\n';
    }

    return 0;
}
