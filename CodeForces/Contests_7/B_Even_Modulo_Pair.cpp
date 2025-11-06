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

        bool has_even = false;
        long long x = arr[0];
        for (int i = 1; i < n; i++)
        {
            if ((arr[i] % x) % 2 == 0)
            {
                cout << x << " " << arr[i] << endl;
                has_even = true;
                break;
            }
        }

        if (!has_even)
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}
