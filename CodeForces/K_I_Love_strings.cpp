#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int T;
    cin >> T;
    while (T--)
    {
        string S;
        string T;
        cin >> S >> T;

        string M = "";
        int n = min(S.size(), T.size());

        for (int i = 0; i < n; i++)
        {
            M += S[i];
            M += T[i];
        }

        if (S.size() > T.size())
        {
            M += S.substr(n);
        }
        else if (T.size() > S.size())
        {
            M += T.substr(n);
        }

        cout << M << endl;
    }

    return 0;
}
