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
        int zero_cnt = 0;
        set<int> s;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 0)
            {
                zero_cnt++;
            }
            s.insert(arr[i]);
        }

        if (s.size() == 1 && *s.begin() > 0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << n - zero_cnt << endl;
        }
    }

    return 0;
}
