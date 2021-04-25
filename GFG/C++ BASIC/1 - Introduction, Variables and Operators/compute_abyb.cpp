// { Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;

// } Driver Code Ends
//User function Template for C++

double compute(int a, int b)
{

    //complete the code
    double ans = double(a) / b;

    return ans;
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

        cout << compute(a, b) << endl;
    }

    return 0;
} // } Driver Code Ends