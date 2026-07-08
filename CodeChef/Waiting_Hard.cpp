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
        int N;
        cin >> N;
        vector<long long> A(N + 1);
        for (int i = 1; i <= N; i++)
        {
            cin >> A[i];
        }

        vector<ll> P(N + 1, 0);
        vector<ll> d(N + 1, 0);
        ll W0 = 0;

        for (int i = 1; i <= N; i++)
        {
            P[i] = max(P[i - 1], A[i]);
        }

        for (int i = 2; i <= N; i++)
        {
            d[i] = max(0LL, P[i - 1] - A[i]);
            W0 += d[i];
        }

        // next strictly greater element to the right
        vector<int> nxt(N + 2, N + 1);
        vector<int> st;
        for (int i = N; i >= 1; i--)
        {
            while (!st.empty() && A[st.back()] <= A[i])
                st.pop_back();
            nxt[i] = st.empty() ? N + 1 : st.back();
            st.push_back(i);
        }

        // next greater-or-equal element to the right
        vector<int> nge(N + 2, N + 1);
        st.clear();
        for (int i = N; i >= 1; i--)
        {
            while (!st.empty() && A[st.back()] < A[i])
                st.pop_back();
            nge[i] = st.empty() ? N + 1 : st.back();
            st.push_back(i);
        }

        // Binary lifting on the "next strictly greater" tree
        int LOG = 1;
        while ((1 << LOG) <= N + 1)
            LOG++;
        LOG++;

        vector<vector<int>> up(LOG, vector<int>(N + 2, N + 1));
        vector<vector<ll>> sum(LOG, vector<ll>(N + 2, 0));

        for (int i = 1; i <= N; i++)
        {
            up[0][i] = nxt[i];
            sum[0][i] = A[i] * 1LL * (nxt[i] - i);
        }
        up[0][N + 1] = N + 1;
        sum[0][N + 1] = 0;

        for (int k = 1; k < LOG; k++)
        {
            for (int i = 1; i <= N + 1; i++)
            {
                int mid = up[k - 1][i];
                up[k][i] = up[k - 1][mid];
                sum[k][i] = sum[k - 1][i] + sum[k - 1][mid];
            }
        }

        auto query_sum_prefix_max = [&](int L, int R) -> ll
        {
            if (L > R)
                return 0LL;
            int cur = L;
            ll ans = 0;

            for (int k = LOG - 1; k >= 0; k--)
            {
                if (up[k][cur] <= R)
                {
                    ans += sum[k][cur];
                    cur = up[k][cur];
                }
            }

            ans += A[cur] * 1LL * (R + 1 - cur);
            return ans;
        };

        // Best improvement by changing A1 to 1
        ll best = 0;

        ll cur_max = 1;
        ll W1 = 0;
        for (int i = 2; i <= N; i++)
        {
            if (cur_max > A[i])
                W1 += cur_max - A[i];
            cur_max = max(cur_max, A[i]);
        }
        best = max(best, W0 - W1);

        // For positions p >= 2
        for (int p = 2; p <= N; p++)
        {
            if (A[p] > P[p - 1])
            {
                // record position
                int r = nge[p]; // first index to the right with value >= A[p]

                ll len = r - p - 1;
                ll S = query_sum_prefix_max(p + 1, r - 1);
                ll R_p = len * A[p] - S;

                best = max(best, R_p);
            }
            else
            {
                // non-record position
                best = max(best, d[p]);
            }
        }

        ll ans = W0 - best;
        cout << ans << '\n';
    }

    return 0;
}
