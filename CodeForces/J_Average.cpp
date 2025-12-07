#include <bits/stdc++.h>
using namespace std;

double calculateAverage(int n)
{
    int arr[n];
    double sum = 0.0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    return sum / n;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int n;
    cin >> n;
    double sum = 0.0;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        sum += num;
    }

    cout << fixed << setprecision(7) << (sum / n) << "\n";
    return 0;
}
