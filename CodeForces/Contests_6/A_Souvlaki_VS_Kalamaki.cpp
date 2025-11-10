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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        bool flag = true;
        vector<int> odd, even;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                odd.push_back(arr[i]);
            }
            else
            {
                even.push_back(arr[i]);
            }
        }

        sort(odd.begin(), odd.end());
        sort(even.begin(), even.end());

        vector<int> merged;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                merged.push_back(even[i / 2]);
            else
                merged.push_back(odd[i / 2]);
        }

        for (int i = 0; i + 1 < n; i++)
        {
            if (merged[i] > merged[i + 1])
            {
                flag = false;
            }
        }

        if (flag)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
