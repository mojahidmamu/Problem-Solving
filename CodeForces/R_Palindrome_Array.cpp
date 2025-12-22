#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

bool isPalindrome(int arr[], int l, int r)
{
    if (l >= r)
    {
        return true;
    }
    if (arr[l] != arr[r])
    {
        return false;
    }
    return isPalindrome(arr, l + 1, r - 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (isPalindrome(arr, 0, n - 1) == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
