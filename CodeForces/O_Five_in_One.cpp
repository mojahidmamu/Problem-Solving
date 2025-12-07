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

int countPalirome(int arr[], int n)
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

int countDivisors(int arr[], int n)
{
    int totalDivisors = 0;
    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        int divisors = 0;
        for (int j = 1; j <= sqrt(num); j++)
        {
            if (num % j == 0)
            {
                divisors++;
                if (j != num / j)
                    divisors++;
            }
        }
        totalDivisors += divisors;
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
    int palindromeCount = countPalirome(arr, n);
    int totalDivisors = countDivisors(arr, n);

    // print:
    cout << "Maximum: " << maximum << "\n";
    cout << "Minimum: " << minimum << "\n";
    cout << "Prime Count: " << primeCount << "\n";
    cout << "Palindrome Count: " << palindromeCount << "\n";
    cout << "Total Divisors: " << totalDivisors << "\n";
    return 0;
}
