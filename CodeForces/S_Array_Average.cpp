#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

long long calculateAverage(int arr[], int n)
{
    long long sum = 0;
    if (n == 0)
    {
        return 0;
    }
    return arr[n - 1] + calculateAverage(arr, n - 1);
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
    long long result = calculateAverage(arr, n);
    double average = result / n;
    cout << fixed << setprecision(6) << average << endl;

    return 0;
}
