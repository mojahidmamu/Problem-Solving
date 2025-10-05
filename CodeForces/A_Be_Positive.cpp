#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int arr[n];
        int neg = 0, zero = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == -1)
            {
                neg++;
            }
            else if (arr[i] == 0)
            {
                zero++;
            }
        }

        int needOperation = zero + neg;
        if (neg % 2 == 1 && zero == 0)
        {
            needOperation += 2; // all -1 → 0 → 1
        }
        

        cout << needOperation << endl;
    }

    return 0;
}
