#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int N, Q;
        cin >> N >> Q;
        string s;
        cin >> s;

        long long arr[Q];
        for (int i = 0; i < Q; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < Q; i++)
        {
            long long x = arr[i];
            long long second = 0;
            int position = 0;

            while (x > 0)
            {
                if (s[position] == 'A')
                {
                    int cnt = 0;
                    int current = position;

                    while (s[current] == 'A' && cnt < x)
                    {
                        cnt++;
                        current = (current + 1) % N;
                        if (current == position)
                        {
                            break;
                        }
                    }
                    x -= cnt;
                    second += cnt;
                    position = current;
                }
                else
                {
                    x /= 2;
                    second++;
                    position = (position + 1) % N;
                }
            }
            cout << second << "\n";
        }
    }

    return 0;
}
