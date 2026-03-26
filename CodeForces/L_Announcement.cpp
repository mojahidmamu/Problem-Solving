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
    vector<int> arr(n);
    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    int replace = 0;
    for (auto &p : freq)
    {
        if (p.second > 1)
        {
            replace += (p.second - 1);
        }
    }

    if (replace == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << replace << endl;
    }

    return 0;
}
