#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int sum(int n, int m)
{
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long suffix_sum = 0;
    for (int i = n - 1; i >= n - m; i--)
    {
        suffix_sum += arr[i];
    }
    return suffix_sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    cout << sum(n, m) << endl;

    return 0;
}
