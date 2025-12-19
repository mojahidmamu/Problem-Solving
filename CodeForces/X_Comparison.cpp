#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    string s;
    cin >> s;
    // Print the smallest string that can be obtained
    int n = s.lengmth();
    if (n == 1)
    {
        cout << s << "\n";
        return 0;
    }

    string answer = s;

    for (int i = 1; i < n; i++)
    {
        string X = s.substr(0, i);
        string Y = s.substr(i);

        sort(X.begin(), X.end());
        sort(Y.begin(), Y.end());

        string candidate = X + Y;

        answer = min(answer, candidate);
    }
    cout << answer << "\n";
    // --- your code here ---

    return 0;
}
