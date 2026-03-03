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

    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << "rated" << endl;
            break;
        }
        else if (a != b)
        {
            cout << "unrated" << endl;
            break;
        }
        else
        {
            cout << "maybe" << enld;
        }
    }

    return 0;
}
