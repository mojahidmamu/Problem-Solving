#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<ll> A(N + 1);
        for (int i = 1; i <= N; i++)
            cin >> A[i];

        vector<ll> pref(N + 1, 0), wait(N + 1, 0);
        ll total = 0;

        for (int i = 1; i <= N; i++)
        {
            pref[i] = max(pref[i - 1], A[i]);
            if (i > 1)
            {
                wait[i] = max(0LL, pref[i - 1] - A[i]);
                total += wait[i];
            }
        }

         vector<ll> gain(N + 1, 0);
        ll best = 0;

        int cur_rec = 0;  
        ll cur_val = 0;  
        ll cur_max = 0;   

        for (int i = 1; i <= N; i++)
        {
            if (A[i] > pref[i - 1])
            {
                
                cur_rec = i;
                cur_val = A[i];
                cur_max = pref[i - 1]; 
            }
            else
            {
                 if (cur_rec != 0)
                {
                    ll M = cur_max;
                    ll contrib = cur_val - max(M, A[i]);
                    gain[cur_rec] += contrib;
                    cur_max = max(cur_max, A[i]);
                }

                 best = max(best, wait[i]);
            }
        }

         for (int i = 1; i <= N; i++)
        {
            if (A[i] > pref[i - 1])
            {
                best = max(best, gain[i]);
            }
        }

        ll ans = total - best;
        cout << ans << '\n';
    }

    return 0;
}