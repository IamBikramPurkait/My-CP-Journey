// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    int countVowels(string str)
    {

        //Your code here
        set<char> s;
        for (auto i : str)
        {
            if (i == 'a' or i == 'e' or i == 'i' or i == 'o' or i == 'u')
                s.insert(i);
        }
        return s.size();
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
        cout << obj.countVowels(s) << endl;
    }
    return 0;
}

// } Driver Code Ends