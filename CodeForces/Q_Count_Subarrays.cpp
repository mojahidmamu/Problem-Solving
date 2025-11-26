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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            int mx = arr[i];
            for (int j = i; j < n; j++)
            {
                mx = max(arr[j], mx);
                if (j > i && arr[j] < arr[j - 1])
                {
                    break;
                }
                cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}
