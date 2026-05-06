#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        int a = x, b = y, c = z;

        // sort a, b, c
        if (a > b)
            swap(a, b);
        if (b > c)
            swap(b, c);
        if (a > b)
            swap(a, b);

        // check triangle condition
        if (a + b > c)
        {
            cout << 0 << endl;
        }
        else
        {
            int moves = (c - (a + b)) + 1;
            cout << moves << endl;
        }
    }

    return 0;
}
