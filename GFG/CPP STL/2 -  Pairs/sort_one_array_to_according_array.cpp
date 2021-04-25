// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

void sortArray(int a[], char b[], int n)
{

    // code here
    vector<pair<int, char>> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back({a[i], b[i]});
    }
    sort(v.begin(), v.end());

    for (auto it : v)
    {
        cout << it.second << " ";
    }
}

// { Driver Code Starts.

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

        char b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        sortArray(a, b, n);

        cout << "\n";
    }
} // } Driver Code Ends