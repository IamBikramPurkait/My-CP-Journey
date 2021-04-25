// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

void difference(int n1, int n2)
{

    //Write your code here

    for (int i = 1; i <= 10; i++)
    {
        cout << n1 * i - n2 * i << " ";
    }
}

// { Driver Code Starts.

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n1, n2;
        cin >> n1 >> n2;
        difference(n1, n2);
        cout << endl;
    }
} // } Driver Code Ends