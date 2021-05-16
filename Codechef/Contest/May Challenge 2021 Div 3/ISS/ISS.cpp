#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll N = 4e6 + 5;

    int arr[N], res[N] = {0};

    for (ll i = 1; i < N; i++)
    {
        arr[i] = i;
    }

    for (int i = 2; i < N; i++)
    {
        if (arr[i] == i)
        {
            arr[i] = i - 1;
            for (int j = 2 * i; j < N; j += i)
            {
                arr[j] = (arr[j] / i) * (i - 1);
            }
        }
    }
    for (int i = 1; i < N; i++)
    {
        res[i] += i - 1;
        for (int j = 2 * i; j < N; j += i)
        {
            res[j] += i * ((1 + arr[j / i]) / 2);
        }
    }
    ll t;
    cin >> t;
    while (t--)
    {
        ll k;
        cin >> k;
        cout << res[4 * k + 1] << endl;
    }
    return 0;
}