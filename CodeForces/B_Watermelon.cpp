#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int w;
    cin >> w;
    if (w < 4)
    {
        cout << "NO" << endl;
    }

    if (w >= 4 && w % 2 == 0)
    {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
