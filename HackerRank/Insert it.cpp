#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int n;
    cin >> n;
    vector<int> arr1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    int m;
    cin >> m;
    vector<int> arr2(m);
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    int index ;
    cin >> index;
     
    arr1.insert(arr1.begin() + index, arr2.begin(), arr2.end());
    for(int val : arr1)
    {
        cout << val << " ";
    }
    return 0;
}
