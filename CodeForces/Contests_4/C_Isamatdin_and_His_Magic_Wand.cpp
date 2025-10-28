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
        vector< long long> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<long long> odd, even;
        for (auto val : arr)
        {
            if (val % 2 == 0)
            {
                even.push_back(val);
            }
            else
            {
                odd.push_back(val);
            }
        }

        sort(odd.begin(), odd.end());
        sort(even.begin(), even.end());

        int i_odd = 0, i_even = 0;
        for (auto val : arr)
        {
            if (val % 2 == 0)
            {
                cout << even[i_even++] <<" ";
            }
            else
            {
                cout << odd[i_odd++] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
