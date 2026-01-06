#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << max(a.size(), b.size()) << endl;
    }

    return 0;
}
