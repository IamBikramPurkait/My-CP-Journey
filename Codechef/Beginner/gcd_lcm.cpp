#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define PI 3.1415926535897932384626

const int mod = 1'000'000'007;
const int N = 3e5, M = N;
//=======================


void solve()
{
    int t;
    cin>>t;
    while(t--){
        ll a,b,gcd,lcm;
        cin>>a>>b;

        gcd=__gcd(a,b);
        lcm=a*b/gcd;

        cout<<gcd<<" "<<lcm;

        cout<<"\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    solve();

    return 0;
}
