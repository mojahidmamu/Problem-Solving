#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long sum = 0;
        long long mn = LLONG_MAX;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }

        long long cost = 0;
        while (arr.size() > 1)
        {
            int idx = 0;
            long long minPair = LLONG_MAX;
            for (int i = 0; i < arr.size(); i++)
            {
                long long X = arr[i];
                long long Y = arr[(i + 1) % arr.size()];
                if (max(X, Y) < minPair)
                {
                    minPair = max(X, Y);
                    idx = i;
                }
            }

            cost += minPair;
            long long merged = minPair;
            int next = (idx + 1) % arr.size();
            if (next > idx)
            {
                arr[idx] = merged;
                arr.erase(arr.begin() + next);
            }
            else
            {
                arr[0] = merged;
                arr.erase(arr.begin() +  idx);
            }
        }

        cout << cost << endl;
    }

    return 0;
}
