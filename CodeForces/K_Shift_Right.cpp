#include <bits/stdc++.h>
using namespace std;

int shiftRight(int arr[], int n, int x)
{
    x = x % n; 
    reverse(arr, arr + n);
    reverse(arr, arr + x);
    reverse(arr + x, arr + n);
    return 0;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    shiftRight(arr, n, x); 

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}
