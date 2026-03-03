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

    int t;
    cin >> t;
    string prev, curr;
    cin >> prev;
    int group = 1;
    for (int i = 1; i < t; i++)
    {
        cin >> curr;
        if (prev != curr)
        {
            group++;
        }
        prev = curr;
    }

    cout << group << endl;

    return 0;
}
