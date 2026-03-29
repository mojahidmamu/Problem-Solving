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
        for (int j = i; j < n; j++)
        {
            string sub = s.substr(i, j - i + 1);
            string rev_sub = sub;
            reverse(all(rev_sub));
            if (sub == rev_sub)
            {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
