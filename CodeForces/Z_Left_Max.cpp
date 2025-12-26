#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int n;
long long arr[100005];

long long MaxTill(int i)
{
    if (i == 0)
    {
        return arr[0];
    }
    long long premax = MaxTill(i - 1);
    return max(premax, arr[i - 1]);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i <= n; i++)
    {
        cout << MaxTill(i) << " ";
    }

    return 0;
}
