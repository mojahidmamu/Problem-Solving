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
        string s;
        cin >> s;

        char last = s[n - 1];
        int answer = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != last)
            {
                answer++;
            }
        }

        cout << answer << endl;
    }

    return 0;
}
