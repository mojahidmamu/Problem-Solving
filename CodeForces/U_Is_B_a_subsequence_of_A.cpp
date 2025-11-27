#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int n, m;
    cin >> n >> m;
    long long arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    //
    long long arr2[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    int i = 0;
    int j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            j++;
        }
        i++;
    }

    if (j == m)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
