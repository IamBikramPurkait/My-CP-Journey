// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    string compareFive(int n)
    {
        // code here
        if (n > 5)
            cout << "Greater than 5";
        else if (n == 5)
            cout << "Equal to 5";
        else
            cout << "Less than 5";
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.compareFive(N) << endl;
    }
    return 0;
}
// } Driver Code Ends