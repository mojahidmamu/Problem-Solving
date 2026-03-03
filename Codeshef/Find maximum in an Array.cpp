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

    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            found = true;
            break;
        }
    }
    if (found)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
