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
        long long x;
        cin >> x;

        bool possible = false;

        if (n == 1)
        {
            possible = (arr[0] == x);
        }
        else
        {
            long long mx = *max_element(arr.begin(), arr.end());
            long long mn = *min_element(arr.begin(), arr.end());
            if (mn <= x && x <= mx)
            {
                possible = true;
              
            }
        }

        if (possible)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
