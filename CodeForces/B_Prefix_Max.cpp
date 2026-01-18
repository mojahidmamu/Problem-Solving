#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

long long valueOfArray(const vector<int> &a)
{
    long long sum = 0;
    int currentMax = 0;
    for (int x : a)
    {
        currentMax = max(currentMax, x);
        sum += currentMax;
    }
    return sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long ans = valueOfArray(a);

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                swap(a[i], a[j]);
                ans = max(ans, valueOfArray(a));
                swap(a[i], a[j]);  
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
