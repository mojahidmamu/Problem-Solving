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

    string s;
    cin >> s;

    int n = s.size();

    bool isSame = true;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[0])
        {
            isSame = false;
            break;
        }
    }

    if (isSame)
    {
        cout << 0 << endl;
        return 0;
    }
    else
    {
        cout << n - 1 << endl;
    }
    return 0;
}
