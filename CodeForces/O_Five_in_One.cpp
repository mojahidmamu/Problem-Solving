#include <bits/stdc++.h>
using namespace std;

int countPrimeNumber(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        bool isPrime = true;
        if (arr[i] <= 1)
            isPrime = false;
        for (int j = 2; j <= sqrt(arr[i]); j++)
        {
            if (arr[i] % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            count++;
    }
    return count;
}

int countPalindrome(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        int rev = 0;
        while (num > 0)
        {
            rev = rev * 10 + num % 10;
            num /= 10;
        }
        if (rev == arr[i])
            count++;
    }
    return count;
}

int countDivisors(int x)
{
    int cnt = 0;
    for (int i = 1; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            cnt++;
            if (i != x / i)
                cnt++;
        }
    }
    return cnt;
}

int countDivisors(int arr[], int n)
{
    int maxDivisors = 0;
    int totalDivisors = 0;
    for (int i = 0; i < n; i++)
    {
        int divs = countDivisors(arr[i]);
        if ((divs > maxDivisors) || (divs == maxDivisors && arr[i] > totalDivisors))
        {
            maxDivisors = divs;
            totalDivisors = arr[i];
        }
    }
    return totalDivisors;
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
    int maximum = *max_element(arr, arr + n);
    int minimum = *min_element(arr, arr + n);
    int primeCount = countPrimeNumber(arr, n);
    int palindromeCount = countPalindrome(arr, n);
    int totalDivisors = countDivisors(arr, n);

    // print:
    cout << "The maximum number : " << maximum << "\n";
    cout << "The minimum number : " << minimum << "\n";
    cout << "The number of prime numbers : " << primeCount << "\n";
    cout << "The number of palindrome numbers : " << palindromeCount << "\n";
    cout << "The number that has the maximum number of divisors : " << totalDivisors << "\n";
    return 0;
}
