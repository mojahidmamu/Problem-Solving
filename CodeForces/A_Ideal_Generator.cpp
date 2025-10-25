#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        bool isIdealGenerator = true; // check just isPrime or not; 
        if (k == 1)
        {
            isIdealGenerator = true;
        }
        if (k == 2)
        {
            isIdealGenerator = false;
        }
        for (int i = 3; i * i <= k; i += 2)
        {
            if (k % i == 0)
            {
                isIdealGenerator = false;
            }
        }

        if (isIdealGenerator)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
