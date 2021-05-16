#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x, k;
        cin >> n >> x >> k;
        n += 1;
        if (x % k == 0)
            cout << "YES" << "\n";
        else if ((n - x ) % k == 0)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
    return 0;
}