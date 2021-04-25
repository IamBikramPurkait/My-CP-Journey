// { Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    //Complete this function
    int isSorted(int arr[], int n)
    {
        bool flagA = false;
        bool flagD = false;
        for (int i = 1; i < n; i++) //this loop is checking if the array is sorted in decreasing order or not
        {
            if (arr[i] >= arr[i - 1])
            {
                flagA = true;
                break;
            }
        }
        //if flagA is true, it means that array is not sorted in decreasing order
        //if flagA is false, it means array is sorted in decreasing order

        for (int i = 1; i < n; i++) //this loop is checking if the array is sorted in increasing order or not
        {
            if (arr[i] <= arr[i - 1])
            {
                flagD = true;
                break;
            }
        }
        //if flagD is true, it means that array is not sorted in increasing order
        //if flagD is false, it means array is sorted in increasing order

        //so you have to just check whether either flagA is false, or flagD is false
        return !flagA || !flagD;
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
        int arr[N];
        for (int i = 0; i < N; i++)
            cin >> arr[i];
        Solution obj;
        cout << obj.isSorted(arr, N);
        cout << endl;
    }
    return 0;
} // } Driver Code Ends