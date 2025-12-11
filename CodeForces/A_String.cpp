#include <bits/stdc++.h>
using namespace std;

int solve(const string &s)
{
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1' && (i == 0 || s[i - 1] == '0'))
        {
            count++;
        }
    }
    return count;
}

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
        int result = solve(s); // Assume solve is a function defined elsewhere
        cout << result << "\n";
    }
    return 0;
}
