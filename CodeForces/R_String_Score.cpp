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
    vector<int> nxt(n), prv(n);

    for (int i = 0; i < n; i++)
    {
        nxt[i] = (i + 1 < n ? i + 1 : n); // N means NULL
        prv[i] = (i - 1 >= 0 ? i - 1 : -1);
    }

    int head = 0;
    int tail = n - 1;

    long long score = 0;
    int cur = head;

    while (cur != n)
    {
        int next = nxt[cur];
        char c = s[cur];

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
            if (next != n)
            {
                int nn = nxt[next];
                nxt[cur] = nn;
                if (nn != n)
                    prv[nn] = cur;
                if (next == tail)
                    tail = cur;
            }
        }
        else if (c == 'Y')
        {
            if (next != n && next != tail)
            {
                int after = nxt[next];

                // Remove next from its place
                nxt[cur] = after;
                if (after != n) 
                    prv[after] = cur;

                // Attach next at end
                nxt[tail] = next;
                prv[next] = tail;
                nxt[next] = n;
                tail = next;
            }
        }
        else if (c == 'Z')
        {
            if (next != n)
            {
                if (s[next] == 'V')
                {
                    score /= 5;

                    int nn = nxt[next];
                    nxt[cur] = nn;
                    if (nn != n)
                        prv[nn] = cur;
                    if (next == tail)
                        tail = cur;
                }
                else if (s[next] == 'W')
                {
                    score /= 2;

                    int nn = nxt[next];
                    nxt[cur] = nn;
                    if (nn != n)
                        prv[nn] = cur;
                    if (next == tail)
                        tail = cur;
                }
            }
        }
        cur = nxt[cur];
    }

    cout << score << "\n";
    return 0;
}
