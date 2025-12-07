#include <bits/stdc++.h>
using namespace std;

double calculateAverage(int n)
{
    double sum = 0.0;
    double arr[n];
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
    cout << fixed << setprecision(7) << calculateAverage(n) << "\n";
    return 0;
}
