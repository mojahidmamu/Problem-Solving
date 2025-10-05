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
        int N;
        cin >> N;
        int arr[N];
        vector<int> v;
        for (int i = 0; i < N; i++)
        {
            if (arr[i] != -1)
            {
                v.push_back(arr[i]);
            }
        }

        bool isGood = false;
        for (int i = 0; i < N; i++)
        {
            if (arr[i] == -1 && arr[i - 1] != -1)
            {
                if (abs(arr[i] - arr[i - 1]))
                {
                    isGood = true;
                    break;
                }
            }
        }

        if (isGood)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }

    return 0;
}
