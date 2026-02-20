#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<int, int> freq;
    for (int a : arr)
        freq[a]++;

    int mexB = 0;
    while (true)
    {
        if (freq[mexB] > 0)
        {
            freq[mexB]--;
            mexB++;
        }
        else
        {
            break;
        }

        // Build remaining elements for S2
        vector<int> remaining;
        for (auto it : freq)
        {
            int val = it.first;
            int cnt = it.second;
            for (int i = 0; i < cnt; i++)
                remaining.push_back(val);
        }

        // Subset sum DP to check if sum = mexB is possible
        int target = mexB;
        vector<bool> dp(target + 1, false);
        dp[0] = true;
        for (int val : remaining)
        {
            for (int s = target; s >= val; s--)
            {
                if (dp[s - val])
                    dp[s] = true;
            }
        }

        if (!dp[target])
            break; // cannot form sum = mexB
        mexB++;
    }

    cout << mexB << endl;

    return 0;
}
