// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    bool isPanagram(string str)
    {

        //Your code here
        // Empty array of size 26
        int arr[26] = {0};

        // Iterating through the string
        for (int i = 0; i < str.length(); i++)
        {
            // if block to manage uppercase
            if ((str[i]) >= 'A' && str[i] <= 'Z')
            {
                arr[str[i] - 'A']++;
            }
            // if block to manage lowercase
            else if (str[i] >= 'a' && str[i] <= 'z')
            {
                arr[str[i] - 'a']++;
            }
        }

        // Checking for the presence of values
        for (int i = 0; i < 26; i++)
        {
            if (arr[i] == 0)
                return false;
        }
        return true;
    }
};

// { Driver Code Starts.

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.isPanagram(s) << endl;
    }

    return 0;
}

// } Driver Code Ends