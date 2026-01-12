#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        // int ones = count(arr.begin(), arr.end(), 1);
        // // int zeros = n - ones;
        // for (int i = 0; i < n; i++)
        // {
        //     if (arr[i] == 1)
        //     {
        //         ones++;
        //     }
        //     else
        //     {
        //         zeros++;
        //     }
        // }

        // if ( zeros % 2 == 1)
        // {
        //     cout << "Alice" << endl;
        // }
        // else
        // {
        //     cout << "Bob" << endl;
        // }

        int transitions = 0;
        for (int i = 0; i + 1 < n; i++)
            if (arr[i] != arr[i + 1])
                transitions++;

        if (transitions % 2 == 1)
            cout << "Alice\n";
        else
            cout << "Bob\n";
    }

    return 0;
}
