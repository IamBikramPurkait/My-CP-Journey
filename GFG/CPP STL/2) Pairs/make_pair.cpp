// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

/*
X, Y: two numbers whose pair is to be returned
*/

pair<int, int> makePair(int x, int y)
{
    // your code here
    //Return a pair of X and Y
    pair<int, int> p;
    p = {x, y};
    return p;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int X, Y;

        // Input two elements to make them as a pair
        cin >> X >> Y;
        pair<int, int> ans = makePair(X, Y);
        cout << "(" << ans.first << "," << ans.second << ")" << endl;
    }
    return 0;
}

// } Driver Code Ends