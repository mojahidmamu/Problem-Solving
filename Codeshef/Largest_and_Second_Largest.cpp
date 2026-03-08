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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int maxVal = a[0];
        int secondMaxVal = INT_MIN;
        for (int i = 1; i < n; i++)
        {
            if (a[i] > maxVal)
            {
                secondMaxVal = maxVal;
                maxVal = a[i];
            }
            else if (a[i] > secondMaxVal && a[i] != maxVal)
            {
                secondMaxVal = a[i];
            }
        }
        cout << maxVal + secondMaxVal << endl;
    }
}
