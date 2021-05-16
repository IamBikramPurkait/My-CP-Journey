#include <bits/stdc++.h>
#define ll long long
#define p 1000000007

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        unsigned int n;
        ll x = 2;
        cin >> n;
        n--;
        int ans = 1;
        while (n)
        {
            if (n & 1) // if n is odd
                ans = (ans * x) % p;
            n = n >> 1; // dividing by 2
            x = (x * x) % p;
        }
        cout << ans << endl;
    }

    return 0;
}