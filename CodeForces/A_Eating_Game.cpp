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

        set<int> winners;
        for (int i = 0; i < n; i++)
        {
            vector<int> temp = a;
            int cur = i;
            int last = -1;

            while (true)
            {
                bool done = true;
                for (int x : temp)
                {
                    if (x > 0)
                    {
                        done = false;
                    }
                }

                if (done)
                {
                    break;
                }

                if (temp[cur] > 0)
                {
                    temp[cur]--;
                    last = cur;
                }

                cur = (cur + 1) % n;
            }
            winners.insert(last);
        }
        cout << winners.size() << endl;
    }

    return 0;
}
