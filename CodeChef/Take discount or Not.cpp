#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

// Author: Abdullah all Mojahid

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> arr(n);

        ll totalCostWithDiscount = x;
        ll totalCostWithoutDiscount = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            totalCostWithoutDiscount += arr[i];
            totalCostWithDiscount += max(0, arr[i] - y);

            // if (arr[i] > y)
            // {
            //     totalCostWithDiscount += (arr[i] - y);
            // }
        }

        if (totalCostWithDiscount < totalCostWithoutDiscount)
        {
            cout << "COUPON" << endl;
        }
        else
        {
            cout << "NO COUPON" << endl;
        }
    }

    return 0;
}
