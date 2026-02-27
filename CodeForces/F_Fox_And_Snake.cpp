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

    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1) // odd row
        {
            for (int j = 0; j < m; j++)
            {
                cout << "#";
            }
        }
        else
        {
            if (i % 4 == 2) // right side
            {
                for (int j = 0; j < m - 1; j++)
                {
                    cout << ".";
                }
                cout << "#";
            }
            else
            {
                cout << "#";
                for (int j = 0; j < m - 1; j++)
                {
                    cout << ".";
                }
            }
        }

        cout << endl;
    }

    return 0;
}
