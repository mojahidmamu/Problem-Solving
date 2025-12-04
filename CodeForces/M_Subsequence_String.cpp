#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    string s;
    cin >> s;

    // Subsequence in S that is equal to "hello" or not.
    string target = "hello";
    int t_index = 0;
    for (char c : s)
    {
        if (c == target[t_index])
        {
            t_index++;
            if (t_index == target.size())
            {
                cout << "YES\n";
                return 0;
            }
        }
    }
    cout << "NO\n";
    // --- your code here ---

    return 0;
}
