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
        for (int i = 0; i < n - 2; i++)
        {
            cin >> arr[i];
        }

        bool found = true;

        for (int i = 0; i < n - 2; i++)
        {
            if (arr[i - 1] == 1 && arr[i] == 0 && arr[i + 1] == 1)
            {
                found = false;
                break;
            }
        }

        if (found)
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
