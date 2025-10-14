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
        int a;
        cin >> a;
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        int inctease  = 0;
        int smash = 0;
        for (int i = 0; i < a - 1; i++)
        {
            if (arr[i] < arr[i + 1])
            {
                inctease++;
            }
            else if (arr[i] > arr[i + 1])
            {
                smash++;
            }
        }
        cout << min(inctease, smash) << "\n";
    }
    return 0;
}
