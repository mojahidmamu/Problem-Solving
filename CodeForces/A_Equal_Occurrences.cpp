#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int length = 0;
        map<int, int> freq;
        // count frequency of each number: 1 to n
        for (int i = 1; i <= n; i++)
        {
            freq[i] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            freq[arr[i]]++;
        }

        int max_freq = 0;
        for (auto &p : freq)
        {
            max_freq = max(max_freq, p.second);
        }

        for (int f = 1; f <= max_freq; f++)
        {
            int cnt = 0;
            for (auto &p : freq)
            {
                if (p.second >= f)
                {
                    cnt++;
                }
            }
            length = max(length, cnt * f);
        }

        cout << length << "\n";
    }
    return 0;
}
