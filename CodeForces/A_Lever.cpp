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
        int arr1[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        int arr2[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }
        int cnt = 0;
        while (true)
        {
            bool increase = false, decrease = false;
            for (int i = 0; i < n; i++)
            {
                if (arr1[i] > arr2[i])
                {
                    decrease = true;
                    arr1[i]--;
                    break;
                }
            }
            for (int i = 0; i < n; i++)
            {
                if (arr1[i] < arr2[i])
                {
                    increase = true;
                    arr1[i]++;
                    break;
                }
            }
            cnt++;
            if (!decrease)
            {
                break;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}
