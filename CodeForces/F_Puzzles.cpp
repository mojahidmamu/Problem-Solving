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

    int n, m;
    cin >> n >> m;

    vector<int> arr(m);
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int mn = INT_MAX;
    for (int i = 0; i < m - n; i++)
    {
        int diff = arr[i + n - 1] - arr[i];
        mn = min(mn, diff);
    }
    cout << mn << endl;

    return 0;
}
