#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s;
    cin >> s;
    string res = "";
    for (int i = n - 1; i >= 0; i--)
    {
        int len = res.length();
        if (len % 2 == 0)
        {
            res.insert(res.begin() + len / 2, s[i]);
        }
        else
        {
            res.insert(res.begin() + len / 2, s[i]);
        }
    }
    cout << res << endl;

    return 0;
}
