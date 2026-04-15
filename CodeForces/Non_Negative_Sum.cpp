#include <bits/stdc++.h>
using namespace std;

int main()
{

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
        sort(arr.rbegin(), arr.rend());

        int sum = 0, count = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            if (sum >= 0)
            {
                count++;
            }
            else
            {
                break;
            }
        }

        cout << count << endl;
    }

    return 0;
}
