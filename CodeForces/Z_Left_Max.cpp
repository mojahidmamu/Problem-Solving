#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

long long MaxTill(int i)
{
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int arr[n];
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
