#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<ll> suffixSum(n);
    suffixSum[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        suffixSum[i] = suffixSum[i + 1] + a[i];
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        cout << suffixSum[x - 1] << endl;
    }

    


    return 0;
}
