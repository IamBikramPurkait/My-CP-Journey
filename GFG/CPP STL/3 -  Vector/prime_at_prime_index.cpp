// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

//vector<int> v: containing N elements
// Find and return vector of elements containing
// prime number at prime index

bool isprime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

vector<int> prime_at_prime(vector<int> v)
{
    // Your code here
    vector<int> res;
    for (int i = 0; i < v.size(); i++)
    {
        if (isprime(i + 1) and isprime(v[i]))
            res.push_back(v[i]);
    }

    return res;
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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int m;
            cin >> m;
            v.push_back(m);
        }
        vector<int> result = prime_at_prime(v);
        for (auto i : result)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends