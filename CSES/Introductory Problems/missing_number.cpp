#include<bits/stdc++.h>
#define ll long long

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    set<ll>s;
    for(ll i=0;i<n-1;i++){
        ll no;
        cin>>no;
        s.insert(no);
    }

    vector<ll>v(s.begin(),s.end());

    for(ll i=1;i<=n;i++){
        if(v[i-1]!=i){
            cout<<i;
            break;
        }
    }
    
    return 0;
}