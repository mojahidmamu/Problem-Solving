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

    int n, b, d;
    cin >> n >> b >> d;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int sum = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > b)
            continue;
        sum += arr[i];
        if (sum > d)
        {
            cnt++;
            sum = 0;
        }
    }
    cout << cnt << endl;

    return 0;
}
