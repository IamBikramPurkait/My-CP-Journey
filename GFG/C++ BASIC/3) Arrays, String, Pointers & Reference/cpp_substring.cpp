// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    string substring(string S, int L, int R)
    {
        // code here
        int len = R - L + 1;
        string newStr = S.substr(L, len);
        return newStr;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S;
        cin >> S;
        int L, R;
        cin >> L >> R;
        Solution ob;
        cout << ob.substring(S, L, R) << endl;
    }
    return 0;
}
// } Driver Code Ends