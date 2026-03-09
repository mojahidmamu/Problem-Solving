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

    vector<vector<int>> a(n + 1);

    for (int i = 2; i <= n; i++)
    {
        int p;
        cin >> p;
        a[p].push_back(i);
    }

    vector<int> leaves;

    for (int i = 1; i <= n; i++)
    {
        if (a[i].empty())
        {
            leaves.push_back(i);
        }
    }

    sort(leaves.begin(), leaves.end());

    int k = leaves.size();

    cout << leaves[(k - 1) / 2] << endl;

    return 0;
}
