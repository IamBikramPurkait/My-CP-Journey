// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

// This function should print the prime factorization
// of the number n
// The new line is given by the driver's code.

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void printPrimeFactorization(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            int x = i;
            while (n % x == 0)
            {
                cout << i << " ";
                x = x * i;
            }
        }
    }
}

// { Driver Code Starts.

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        printPrimeFactorization(n);

        cout << endl;
    }
} // } Driver Code Ends