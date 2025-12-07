#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int n;
    cin >> n;
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    int arr3[2 * n];
    for (int i = 0; i < n; i++)
    {
        arr3[i] = arr2[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr3[i + n] = arr1[i];
    }
    for (int i = 0; i < 2 * n; i++)
    {
        cout << arr3[i] << " ";
    }
    return 0;
}
