#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int T;
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;
        int arr[m];
        int maxArr = 0;
        for (int i = 0; i < m; i++)
        {
            cin >> arr[i];
            maxArr = max(maxArr, arr[i]);
        }

        int subArrray = n - maxArr + 1;
        cout << subArrray << endl;
    }

    return 0;
}
