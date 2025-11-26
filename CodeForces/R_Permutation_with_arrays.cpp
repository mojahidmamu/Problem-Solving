#include <bits/stdc++.h>
using namespace std;

bool isPermutation(int arr1[], int arr2[], int n)
{
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + n);

    for (int i = 0; i < n; i++)
    {
        if (arr1[i] != arr2[i])
        {
            return false;
        }
    }
    return true;
}

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
    //
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    if (isPermutation(arr1, arr2, n))
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}
