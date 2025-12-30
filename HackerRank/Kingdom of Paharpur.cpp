#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<ll> left(n);
    left[0] = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= arr[i - 1])
        {
            left[i] = left[i - 1] + 1;
        }
        else
        {
            left[i] = 1;
        }
    }

    vector<ll> right(n);
    right[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] >= arr[i + 1])
        {
            right[i] = right[i + 1] + 1;
        }
        else
        {
            right[i] = 1;
        }
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--, r--;

        ll mx = *max_element(arr.begin() + l, arr.begin() + r + 1);
        int count = 0, idx = -1;
        for (int i = l; i <= r; i++)
        {
            if (arr[i] == mx)
            {
                count++;
                if (idx == -1)
                {
                    idx = i;
                }
            }
        }

        if (count > 1)
        {
            cout << "NO\n";
            continue;
        }

        if (left[idx] >= idx - l + 1 && right[idx] >= r - idx + 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
