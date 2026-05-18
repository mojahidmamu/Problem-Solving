#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long multTestQ;
    cin >> multTestQ;
    for (long long test = 0; test < multTestQ; test++)
    {
        int n;
        cin >> n;
        vector<int> a(n + 1), b(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++)
            cin >> b[i];
        vector<vector<int>> syncs(n + 2), bads(n + 2);
        vector<int> sync_val(n + 2, 0);
        for (int i = 1; i <= n; i++)
        {
            if (a[i] == b[i])
            {
                syncs[a[i]].push_back(i);
                sync_val[i] = a[i];
            }
            else
            {
                bads[a[i]].push_back(i);
                bads[b[i]].push_back(i);
            }
        }
        vector<int> successor(n + 2, 0);
        for (int k = 1; k < n; k++)
        {
            auto &sl = syncs[k + 1];
            auto &bl = bads[k + 1];
            for (int pos : syncs[k])
            {
                auto it = upper_bound(sl.begin(), sl.end(), pos);
                if (it != sl.end())
                {
                    int np = *it;
                    auto bit = lower_bound(bl.begin(), bl.end(), pos + 1);
                    if (bit == bl.end() || *bit >= np)
                    {
                        successor[pos] = np;
                    }
                }
            }
        }
        vector<long long> dpp(n + 2, 0);
        vector<int> all_syncs;
        for (int k = 1; k <= n; k++)
        {
            for (int p : syncs[k])
                all_syncs.push_back(p);
        }
        sort(all_syncs.rbegin(), all_syncs.rend());
        for (int pos : all_syncs)
        {
            int kk = sync_val[pos];
            int nextp = successor[pos];
            if (nextp != 0)
            {
                dpp[pos] = (nextp - pos) + dpp[nextp];
            }
            else
            {
                int fbad = n + 1;
                if (kk + 1 <= n)
                {
                    auto &bl = bads[kk + 1];
                    auto it = lower_bound(bl.begin(), bl.end(), pos + 1);
                    if (it != bl.end())
                        fbad = *it;
                }
                dpp[pos] = fbad - pos;
            }
        }
        vector<int> danger;
        for (int p : syncs[1])
            danger.push_back(p);
        for (int p : bads[1])
            danger.push_back(p);
        sort(danger.begin(), danger.end());
        auto ite = unique(danger.begin(), danger.end());
        danger.resize(ite - danger.begin());
        long long ans = 0;
        int prevv = 0;
        for (int d : danger)
        {
            int lft = prevv + 1;
            int rgt = d - 1;
            if (lft <= rgt)
            {
                long long len = rgt - lft + 1LL;
                ans += len * (len + 1) / 2;
            }
            prevv = d;
        }
        int lft = prevv + 1;
        int rgt = n;
        if (lft <= rgt)
        {
            long long len = rgt - lft + 1LL;
            ans += len * (len + 1) / 2;
        }
        for (size_t j = 0; j < syncs[1].size(); j++)
        {
            int p1 = syncs[1][j];
            int left_L = (j == 0 ? 1 : syncs[1][j - 1] + 1);
            int validL = left_L;
            auto &bl1 = bads[1];
            auto itb = upper_bound(bl1.begin(), bl1.end(), p1 - 1);
            if (itb != bl1.begin())
            {
                --itb;
                int lb = *itb;
                if (lb >= left_L)
                {
                    validL = max(validL, lb + 1);
                }
            }
            long long numL = max(0LL, (long long)p1 - validL + 1);
            if (numL > 0)
            {
                ans += numL * dpp[p1];
            }
        }
        cout << ans << endl;
    }
    return 0;
}