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
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'V')
        {
            score += 5;
        }
        else if (s[i] == 'W')
        {
            score += 2;
        }
        else if (s[i] == 'X')
        {
            if (i + 1 < s.size())
            {
                s.erase(i + 1, 1);
            }
        }
        else if (s[i] == 'Y')
        {
            if (i + 1 < s.size())
            {
                char temp = s[i + 1];
                s.erase(i + 1, 1);
                s.push_back(temp);
            }
        }
        else if (s[i] == 'Z')
        {
            if (i + 1 < s.size())
            {
                if (s[i + 1] == 'V')
                {
                    score /= 5;
                    s.erase(i + 1, 1);
                }
                else if (s[i + 1] == 'W')
                {
                    score /= 2;
                    s.erase(i + 1, 1);
                }
            }
        }
    }

    cout << score << "\n";
    return 0;
}
