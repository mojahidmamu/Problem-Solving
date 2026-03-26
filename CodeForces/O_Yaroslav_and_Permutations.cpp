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
    vector<string> grid(n);
    for (int i = 0; i < n; i++)
    {
        cin >> grid[i];
    }

    bool finite;
    if (n == 1)
    {
        finite = true;
    }

    if (finite == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << enld;
    }

    return 0;
}
