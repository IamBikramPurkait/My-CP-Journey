// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // } Driver Code Ends
        //User function Template for C++

        // a[] : declared and initialized above

        // complete the code here.
        int size = sizeof(a) / sizeof(a[0]);

        // driver code prints size

        // { Driver Code Starts.

        cout << size << "\n";
    }
}
// } Driver Code Ends