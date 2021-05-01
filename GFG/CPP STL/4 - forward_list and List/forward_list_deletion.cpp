// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

// list: remove from front of list provided
void removeFromFront(forward_list<int> &list)
{
    // your code here
    list.pop_front();
}

// list: remove elements after given iteraring position
// x: is the iterating position after which you have to remove
//    from list
void removeAfter(forward_list<int> &list, int X)
{
    // your code here
    auto it = list.before_begin();
    advance(it, X);
    list.erase_after(it);
}

// list: remove elements from list from range given
// start: starting position of the range
// end: end position of the range
void removeFromInRange(forward_list<int> &list, int start, int end)
{
    // your code here
    auto startIt = list.before_begin();
    advance(startIt, start);

    auto endIt = list.before_begin();
    advance(endIt, end);

    list.erase_after(startIt, endIt);
}

// list: remove all elements from the list
void removeAll(forward_list<int> &list)
{
    // your code here
    list.clear();
}

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int N, val;
        cin >> N;

        forward_list<int> list;

        for (int i = 1; i <= N; i++)
        {
            cin >> val;
            list.push_front(val);
        }

        int typeQuery;
        cin >> typeQuery;

        if (typeQuery == 1)
        {
            removeFromFront(list);
        }
        else if (typeQuery == 2)
        {
            int x;
            cin >> x;
            removeAfter(list, x);
        }
        else if (typeQuery == 3)
        {
            int start, end;
            cin >> start >> end;
            removeFromInRange(list, start, end);
        }
        else
        {
            removeAll(list);
        }

        if (list.empty())
            cout << "Empty" << endl;
        else
        {
            for (int &temp : list)
                cout << temp << " ";
            cout << endl;
        }
    }
}

// } Driver Code Ends