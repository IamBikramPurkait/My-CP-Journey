// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    //Function to find median of the array elements.
    int median(int A[], int N)
    {

        sort(A, A + N);
        int median1 = 0, median2 = 0, median = 0;
        int num = floor(N / 2);
        //your code here
        //If median is in fraction then convert it to integer and return
        if (N % 2 == 0)
        {
            median1 = A[num];
            median2 = A[num - 1];
            median = (median1 + median2) / 2;
        }
        else
            median = A[num];
        return floor(median);
    }
    //Function to find mean of the array elements.
    int mean(int A[], int N)
    {
        //your code here
        int sum = 0;
        return floor(accumulate(A, A + N, sum) / N);
    }
};

// { Driver Code Starts.

int main()
{
    //testcase
    int T;
    cin >> T;

    //looping testcase
    while (T--)
    {
        //number of elements in array
        int N;
        cin >> N;
        int a[N];

        //inseting elements in the array
        for (int i = 0; i < N; i++)
        {
            cin >> a[i];
        }
        Solution ob;
        //calling mean() and median() functions
        cout << ob.mean(a, N) << " " << ob.median(a, N) << endl;
    }
    return 0;
}
// } Driver Code Ends