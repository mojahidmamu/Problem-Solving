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

    vector<int> a(n + 1);
    vector<int> b(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }

    vector<int> leaves;
    for (int i = 1; i <= n; i++)
    {
        if (b[i] == 0)
        {
            leaves.push_back(i);
        }
    }

    sort(leaves.begin(), leaves.end());
    int k = leaves.size();
    int idx = (k + 1) / 2;
    ;
    cout << leaves[idx] << endl;

    return 0;
}
