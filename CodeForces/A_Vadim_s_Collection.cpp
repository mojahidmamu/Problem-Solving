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
        string s;
        cin >> s;
        vector<int> cnt(10, 0);
        for (char c : s)
        {
            cnt[c - '0']++;
        }
        string ans;
        for (int i = 0; i < 10; i++)
        {
            int need = 9 - i;
            for (int d = need; d <= 9; d++)
            {
                if (cnt[d] > 0)
                {
                    ans.push_back('0' + d);
                    cnt[d]--;
                    break;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}
