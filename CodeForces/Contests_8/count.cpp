#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    long long n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long mn = arr[0];
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] < mn)
        {
            mn = arr[i];
        }
    }

    long long count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == mn)
        {
            count++;
        }
    }

    if (count % 2 == 0)
    {
        cout << "EVEN" << endl;
    }
    else
    {
        cout << "ODD" << endl;
    }

    return 0;
}
