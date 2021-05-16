#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int no1, no2;
        cin>>no1>>no2;
        int count = 0;
        vector<int> v(no1+1, 1);
        for(int i = 2;i<=no1;i++)
        {
            int x = no2%i;
            count += v[x];
            for(int j = x;j<=no1;j+=i)
            {
                v[j]++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}