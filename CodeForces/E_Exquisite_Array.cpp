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
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<int> diff(n - 1);
        for (int i = 0; i < n - 1; i++)
        {
            diff[i] = abs(arr[i + 1] - arr[i]);
        }

        vector<long long> res;
        // iterate k = 1 to n-1
        for (int k = 1; k <= n - 1; k++)
        {
            long long count = 0;
            int length = 0;

            for (int i = 0; i < n - 1; i++)
            {
                if (diff[i] >= k)
                {
                    length++;
                }
                else
                {
                    count += 1LL * length * (length + 1) / 2;
                    length = 0;
                }
            }
            count += 1LL * length * (length + 1) / 2;
            res.push_back(count);
        }

        for (size_t i = 0; i < res.size(); i++)
        {
            cout << res[i] << (i + 1 == res.size() ? '\n' : ' ');
        }
    }

    return 0;
}
