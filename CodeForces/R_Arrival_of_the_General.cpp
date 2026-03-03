#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

// Author: Abdullah all Mojahid

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int arr[n];
    int needSecond = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxHeight = -1;
    int maxIndex = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxHeight)
        {
            maxHeight = arr[i];
            maxIndex = i;
        }
    }

    int minHeight = 101;
    int minIndex = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= minHeight)
        {
            minHeight = arr[i];
            minIndex = i;
        }
    }

    int swaps = maxIndex + (n - 1 - minIndex);
    if (minIndex < maxIndex)
    {
        swaps--;
    }

    cout << needSecond << endl;

    return 0;
}
