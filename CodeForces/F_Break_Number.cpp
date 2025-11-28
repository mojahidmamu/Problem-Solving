    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        // --- your code here ---
        int n;
        cin >> n;

        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;

            long long cnt = 0;
            while (x % 2 == 0)
            {
                x /= 2;
                cnt++;
            }
            ans = max(ans, cnt);
        }
        cout << ans << endl;

        return 0;
    }
