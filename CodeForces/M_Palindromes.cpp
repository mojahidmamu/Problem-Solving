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
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[i + 1])
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
