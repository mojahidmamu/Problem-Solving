#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int n;
    cin >> n;
    int year = n / 365;
    int remaining_days = n % 365;

    int months = remaining_days / 30;
    int days = remaining_days % 30;

    cout << year << " years" << endl;
    cout << months << " months" << endl;
    cout << days << " days" << endl;    

    return 0;
}
