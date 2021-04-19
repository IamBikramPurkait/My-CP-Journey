// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    // User function to complete
    // arr[]: input array
    // n: size of array
    // k: find element smaller and closest to it.
    int immediateSmaller(int arr[], int n, int x)
    {
        // your code here
        int temp = -1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < x)
            {
                temp = max(temp, arr[i]);
            }
        }

        return temp;
    }
};

// { Driver Code Starts.

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int x;
        cin >> x;
        Solution ob;
        cout << ob.immediateSmaller(arr, n, x) << endl;
    }

    return 0;
}
// } Driver Code Ends