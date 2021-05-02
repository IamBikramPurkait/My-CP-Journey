// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b)
    {

        // Your code here
        int arr[26] = {0}, arr1[26] = {0};
        int i = 0;
        while (a[i] != '\0')
        {
            arr[a[i] % 97] += 1;
            i++;
        }
        i = 0;
        while (b[i] != '\0')
        {
            arr1[b[i] % 97] += 1;
            i++;
        }
        int check = 0;
        for (int i = 0; i < 26; i++)
        {
            if (arr[i] != arr1[i])
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
        string c, d;

        cin >> c >> d;
        Solution obj;
        if (obj.isAnagram(c, d))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
// } Driver Code Ends