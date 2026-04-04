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
         vector<int> a(7);
        int sum = 0;

        for (int i = 0; i < 7; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        int mxElement = *max_element(a.begin(), a.end());
        int ans = 2 * mxElement - sum;
        cout << ans << '\n';


    }

    return 0;
}
