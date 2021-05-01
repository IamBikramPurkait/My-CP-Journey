// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

char extraChar(string s1, string s2)
{

    //code here
    // store string values in map
    unordered_map<char, int> m;

    // store second string in map with frequency
    for (int i = 0; i < s2.length(); i++)
        m[s2[i]]++;

    // store first string in map with frequency
    for (int i = 0; i < s1.length(); i++)
        m[s1[i]]--;

    for (auto h1 = m.begin(); h1 != m.end(); h1++)
    {

        // if the frequency is 1 then this
        // character is which is added extra
        if (h1->second == 1)
            return h1->first;
    }
}

// { Driver Code Starts.

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1;
        cin >> s2;
        cout << extraChar(s1, s2) << endl;
    }
} // } Driver Code Ends