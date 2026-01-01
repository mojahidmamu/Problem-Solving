#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    int countGood = 0;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        vector<bool> visited(10, false);
        for (char ch : s)
        {
            int digit = ch - '0';
            visited[digit] = true;
        }

        bool isGood = true;
        for (int j = 0; j < k; j++)
        {
            if (!visited[j])
            {
                isGood = false;
                break;
            }
        }

        if (isGood)
        {
            countGood++;
        }
        
    }
    cout << countGood << endl;

    return 0;
}
