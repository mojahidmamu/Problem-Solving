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

    int n;
    cin >> n;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }

    bool rated = false;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            cout << "rated" << endl;
            return 0;
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] < a[i + 1])
        {
            cout << "unrated" << endl;
            return 0;
        }
    }

    cout << "maybe" << endl;

    return 0;
}
