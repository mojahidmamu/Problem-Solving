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

        vector<int> arr2;
        for (int i = 0; i < n; i++)
        {
            int currentMax = arr[i];
            for (int j = i; j < n; j++)
            {
                currentMax = max(currentMax, arr[j]);
                arr2.push_back(currentMax);
            }
        }

        //
        for (int i = 0; i < (int)arr2.size(); i++)
        {
            cout << arr2[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
