#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, m, h;
        cin >> n >> m >> h;
        
        vector<long long> orig(n), add(n, 0);
        vector<int> last_update(n, -1);

        for (int i = 0; i < n; i++)
        {
            cin >> orig[i];
        }

        int reset_id = 0;

        while (m--)
        {
            ll b, c;
            cin >> b >> c;
            b--;
            long long current;
            if (last_update[b] < reset_id)
            {
                current = orig[b];
            }
            else
            {
                current = orig[b] + add[b];
            }

            if (current + c > h)
            {
                reset_id++;
            }
            else
            {
                if (last_update[b] < reset_id)
                {
                    add[b] = 0;
                    last_update[b] = reset_id;
                }
                add[b] += c;
            }
        }


        for (int i = 0; i < n; i++)
        {
            if (last_update[i] < reset_id)
            {
                cout << orig[i] << " ";
            }
            else
            {
                cout << orig[i] + add[i] << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}
