// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

int countVowels(string str)
{
    // count number of vowels present in string
    int count = 0;
    for (auto i : str)
    {
        if (i == 'a' or i == 'e' or i == 'i' or i == 'o' or i == 'u')
            count++;
    }
    return count;
}

// { Driver Code Starts.

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;
        cout << countVowels(str) << endl;
    }
} // } Driver Code Ends