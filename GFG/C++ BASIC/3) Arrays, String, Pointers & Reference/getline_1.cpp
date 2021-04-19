// { Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;

// } Driver Code Ends
//User function Template for C++

// Function to take input of string using getline
void getLine()
{

    string a;

    // Your code here
    // Take input of 'a' using getline
    getline(cin, a);

    cout << a << endl;
}

// { Driver Code Starts.

// Driver Code
int main()
{
    // Number of testcase input
    int t;
    cin >> t;
    cin.ignore(); //Ignoring the newline so it isn't consumed by getline. Read about it!!
    while (t--)
    {
        getLine();
    }

    return 0;
} // } Driver Code Ends