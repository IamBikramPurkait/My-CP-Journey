#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,k,count;
    cin>>n>>k;
    while(n--){
        ll no;
        cin>>no;
        if(no%k==0)
            count++;
    }
    cout<<count;
    return 0;
}