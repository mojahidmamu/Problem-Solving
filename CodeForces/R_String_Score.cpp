#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int n;
    cin >> n;
    string s;
    cin >> s;
    int score = 0;
    for (char c : s)
    {
        if (c == 'V')
        {
            score += 5;
        }
        else if (c == 'W')
        {
            score += 2;
        }
        else if (c == 'X')
        {
        }
        else if (c == 'Y')
        {
        }
        else if (c == 'Z')
        {
            score += 1;
        }
    }

    cout << score << "\n";
    return 0;
}
