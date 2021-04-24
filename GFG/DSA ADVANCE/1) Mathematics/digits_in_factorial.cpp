// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    int digitsInFactorial(int N)
    {
        // code here
        double sum = 0.0;
        for (int j = 1; j <= N; j++)
        {
            //sum stores log(j) + log(j+1) + ... + log(N)
            sum += log10(j);
        }
        return (1 + floor(sum));
    }
};

// { Driver Code Starts.

int main()
{
    int T;

    //taking testcases
    cin >> T;
    while (T--)
    {
        int N;

        //taking N
        cin >> N;
        Solution ob;
        //calling method digitsInFactorial()
        cout << ob.digitsInFactorial(N) << endl;
    }
    return 0;
}
// } Driver Code Ends
