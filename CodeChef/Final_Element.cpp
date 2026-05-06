#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int result = 0;
        for (int i = 0; i < n; i++)
        {
            if ((i & (n - 1)) == i)
            {
                result ^= arr[i];
            }
        }

        cout << result << endl;
    }

    return 0;
}
