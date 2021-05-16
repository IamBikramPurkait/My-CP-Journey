#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x, a, b;
        cin >> x >> a >> b;
        int result;
        result = (a + (100 - x) * b) * 10;
        cout << result << endl;
    }

    return 0;
}
