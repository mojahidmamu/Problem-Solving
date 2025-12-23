#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

bool expression(long long n, long long x, long long arr[])
{
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, x;
    cin >> n >> x;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (expression(n, x, arr) == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
