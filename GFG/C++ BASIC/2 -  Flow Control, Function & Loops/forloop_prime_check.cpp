// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

void isPrime(int n);

// } Driver Code Ends
//User function Template for C++

//Complete this function
void isPrime(int n)
{
    int i;
    bool isPrime = true;

    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1)
    {
        isPrime = false;
    }
    else
    {
        for (i = 2; i <= n / 2; ++i)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime)
        cout << "Yes";
    else
        cout << "No";

    cout << endl;
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
        isPrime(n);
    }
    return 0;
} // } Driver Code Ends