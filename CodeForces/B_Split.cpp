#include <bits/stdc++.h>
using namespace std;

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
        vector<int> a(2 * n);
        for (int i = 0; i < 2 * n; i++)
            cin >> a[i];

        unordered_map<int, int> freq;
        for (int x : a)
            freq[x]++;

        int odd = 0, even = 0;
        for (auto d : freq)
        {
            int nums = d.first;
            int f = d.second;
            if (f % 2 == 1)
                odd++;
            else
                even++;
        }

        int f_p = min(n, odd);
        int f_q = min(n, even + max(0, odd - n));

        cout << f_p + f_q << "\n";
    }
}
