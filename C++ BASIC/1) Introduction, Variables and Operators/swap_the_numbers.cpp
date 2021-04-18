// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

void utility(int &a, int &b)
{
    //code here
    // a=10
    // b=20
    a = a + b; //a=30
    b = a - b; //b=10
    a = a - b; //a=20
}

// { Driver Code Starts.

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        utility(a, b);

        cout << a << " " << b << endl;
    }

} // } Driver Code Ends