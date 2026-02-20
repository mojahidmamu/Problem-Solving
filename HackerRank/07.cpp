#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<int, int> freq;
    for (int value : arr)
    {
        freq[value]++;
    }

    int mexB = 0;
    while (true)
    {
        if (freq[mexB] > 0)
        {
            freq[mexB]--;
            mexB++;
        }
        else
        {
            break;
        }
    }

    cout << mexB << endl;

    return 0;
}
