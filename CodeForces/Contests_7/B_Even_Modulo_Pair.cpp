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
        for (int i = 0; i < n - 1; i++)
        {
            if ((arr[i + 1] % arr[i]) % 2 == 0)
            {
                cout << arr[i] << " " << arr[i + 1] << endl;
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
