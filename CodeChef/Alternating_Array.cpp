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

        int cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if (i % 2 == 0)
            {
                if (x % 2 == 0)
                {
                    cnt1++;
                }
                if (x % 2 == 1)
                {
                    cnt2++;
                }
            }
            else
            {
                if (x % 2 == 1)
                {
                    cnt1++;
                }
                if (x % 2 == 0)
                {
                    cnt2++;
                }
            }
        }
        cout << min(cnt1, cnt2) << endl;
    }

    return 0;
}
