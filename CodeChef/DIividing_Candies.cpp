#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int maxCandies = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;

            if (a % x == 0)
            {
                if (a > maxCandies)
                {
                    maxCandies = a
                    ;
                }
            }
        }
        cout << maxCandies << endl;
    }

    return 0;
}
