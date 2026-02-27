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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        bool non_decreasing = true;
        int first_dec_index = -1;

        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                non_decreasing = false;
                first_dec_index = i;
                break;
            }
        }

        if (non_decreasing)
        {
            cout << "Bob\n";
        }
        else
        {
            if (first_dec_index % 2 == 0)
            {
                cout << "Alice\n";
            }
            else
            {
                cout << "Bob\n";
            }
        }
    }

    return 0;
}
