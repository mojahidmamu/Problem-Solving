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

    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;
    while (m--)
    {
        int x, y;
        cin >> x >> y;

        int left = y - 1;
        int right = a[x] - y;

        if (x > 1)
            a[x - 1] += left;

        if (x < n)
            a[x + 1] += right;

        a[x] = 0;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << endl;
    } 

    return 0;
}
