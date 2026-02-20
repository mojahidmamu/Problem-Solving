#include <bits/stdc++.h>
using namespace std;

#define ll long long 
// Author: Abdullah all Mojahid

// GCD
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main()
{ 

    ll x[7], y[7];
    for (int i = 0; i < 7; i++)
    {
        cin >> x[i] >> y[i];
    }

    // Balls 1-5,7-12: transform 1->0, 3->2
    ll num1 = 0, den1 = 1;
    for (int i = 0; i < 7; i++)
    {
        ll run = i;
        if (i == 1)
            run = 0;
        if (i == 3)
            run = 2;
        num1 = num1 * y[i] + run * x[i] * den1;
        den1 = den1 * y[i];
        ll g = gcd(num1, den1);
        num1 /= g;
        den1 /= g;
    }

    // Ball 6: last ball of first over, 1->1, 3->2
    ll num2 = 0, den2 = 1;
    for (int i = 0; i < 7; i++)
    {
        ll run = i;
        if (i == 1)
            run = 1;
        if (i == 3)
            run = 2;
        num2 = num2 * y[i] + run * x[i] * den2;
        den2 = den2 * y[i];
        ll g = gcd(num2, den2);
        num2 /= g;
        den2 /= g;
    }

    ll total_num = num1 * 11 * den2 + num2 * den1; // 11 = 5+6 balls of num1
    ll total_den = den1 * den2;

    ll g = gcd(total_num, total_den);
    cout << total_num / g << " " << total_den / g << "\n";

    return 0;
}
