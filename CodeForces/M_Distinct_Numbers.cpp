#include <bits/stdc++.h>
using namespace std;

int distrinctNumbers(int arr[], int n)
{
    unordered_set<int> distinctSet;
    for (int i = 0; i < n; i++)
    {
        distinctSet.insert(arr[i]);
    }
    return distinctSet.size();
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << distrinctNumbers(arr, n) << "\n";
    return 0;
}
