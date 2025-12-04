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

    vector<int> nxt(n + 1);
    for (int i = 0; i < n; i++)
    {
        nxt[i] = i + 1;
    }

    long long score = 0;
    int i = 0;
    while (i < n)
    {
        char c = s[i];
        int j = nxt[i];

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
            if (j < n)
            {
                nxt[i] = nxt[j];
            }
        }
        else if (c == 'Y')
        {
            if (j < n)
            {
                int k = nxt[j];
                char temp = s[j];

                // remove j from middle
                nxt[i] = k;

                // move j to end
                nxt[j] = n;
                nxt[last] = j;
                last = j;
            }
        }
        else if (c == 'Z')
        {
            if (j < n)
            {
                if (s[j] == 'V')
                {
                    score /= 5;
                    nxt[i] = nxt[j]; // remove j
                }
                else if (s[j] == 'W')
                {
                    score /= 2;
                    nxt[i] = nxt[j]; // remove j
                }
            }
        }
    }

    cout << score << "\n";
    return 0;
}
