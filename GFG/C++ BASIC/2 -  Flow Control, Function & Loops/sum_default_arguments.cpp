// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

int sum(int a, int b, int c, int d)
{
    //code here
    return a + b + c + d;
}

int sum(int a, int b)
{
    //code here
    return a + b;
}

int sum(int a, int b, int c)
{
    //code here
    return a + b + c;
}

// { Driver Code Starts.

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int c;
        cin >> c;
        if (c == 2)
        {
            int a, b;
            cin >> a >> b;
            cout << sum(a, b) << endl;
        }
        else if (c == 3)
        {
            int a, b, c;
            cin >> a >> b >> c;
            cout << sum(a, b, c) << endl;
        }
        else if (c == 4)
        {
            int a, b, c, d;
            cin >> a >> b >> c >> d;
            cout << sum(a, b, c, d) << endl;
        }
    }
    return 0;
} // } Driver Code Ends