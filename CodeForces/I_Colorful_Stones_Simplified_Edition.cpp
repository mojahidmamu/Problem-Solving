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

    string s, t;
    cin >> s >> t;

    int position = 0;
    for (int i = 0; i < t.length(); i++)
    {
        if (t[i] == s[position])
        {
            position++;
        }
    }
    cout << position + 1 << endl;

    return 0;
}
