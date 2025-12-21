#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

long long sum(int n, int m, vector<long long> &arr)
{
    if (m == 0)
    {
        return 0;
    }
    return arr[n - m] + sum(n, m - 1, arr);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << sum(n, m, arr) << endl;

    return 0;
}
