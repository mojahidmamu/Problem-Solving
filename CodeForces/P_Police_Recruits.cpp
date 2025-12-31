#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int available = 0;
    int unrated = 0;

    for (int i = 0; i < n; i++)
    {
        int event;
        cin >> event;

        if (event == -1)
        {
            if (available > 0)
            {
                available++;
            }
            else
            {
                unrated++;
            }
        }
        else
        {
            available += event;
        }
    }

    cout << unrated << endl;

    return 0;
}
