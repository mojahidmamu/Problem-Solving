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
            int position = 0;
            long long second = 0;

            while (x > 0)
            {
                if (s[position] == 'A')
                {
                    x -= 1;
                }
                else
                {
                    x /= 2;
                }
                second++;
                position = (position + 1) % N;
            }
            cout << second << "\n";
        }
    }

    return 0;
}
