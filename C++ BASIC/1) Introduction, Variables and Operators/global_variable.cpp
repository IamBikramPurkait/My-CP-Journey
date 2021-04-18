// { Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;

// } Driver Code Ends
//User function Template for C++

//decalre global variable g below
int g = 10;

/**
 * int getter(){
     return g;
 }
 * 
 * void setter(int x){
     g = x;
 }
 * 

*/

// { Driver Code Starts.

// global variable accessed from
// within a function
int getter()
{
    return g;
}

void setter(int x)
{
    g = x;
}

// main function
int main()
{
    setter(g);
    cout << getter() << endl;

    return 0;
}
// } Driver Code Ends