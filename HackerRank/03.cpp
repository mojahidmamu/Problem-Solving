#include <bits/stdc++.h>
using namespace std;

#define ll long long

// Author: Abdullah all Mojahid

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> arr(n);
    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    int mex = 0;
    while (freq[mex] > 0)
    {
        mex++;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        if (freq[x] == 0)
        {
            cout << -1 << "\n";
        }
        else
        {
            freq[x]--;

            // recompute mex
            int curr_mex = 0;
            while (freq[curr_mex] > 0)
            {
                curr_mex++;
            }

            cout << curr_mex << "\n";

            // restore x
            freq[x]++;
        }
    }

    return 0;
}
