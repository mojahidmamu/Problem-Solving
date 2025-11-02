#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < mn)
        {
            mn = arr[i];
        }
    }

    int min_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == mn)
        {
            min_count++;
        }
    }
    if (min_count % 2 != 0)
    {
        cout << "Lucky" << endl;
    }
    else
    {
        cout << "Unlucky" << endl;
    }

    return 0;
}
