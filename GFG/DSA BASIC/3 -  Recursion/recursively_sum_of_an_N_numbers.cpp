// { Driver Code Starts
#include <iostream>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    int recursiveSum(int n)
    {
        //Your code here
        //Recursively sum from 1 to N and return
        if (n == 0)
            return 0;
        return n + recursiveSum(n - 1);
    }
};

// { Driver Code Starts.
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.recursiveSum(N) << endl;
    }
    return 0;
} // } Driver Code Ends