#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<ll>v;
    ll no;
    for(int i=0;i<n;i++){
        cin>>no;
        v.push_back(no);
    }
    // for(auto x:v)
    //     cout<<x<<" ";
    ll odd=0,even=0;
    for(auto x:v){
        if(x%2==0)
            even++;
        else
            odd++;
    } 
        (even>odd)?cout<<"READY FOR BATTLE":cout<<"NOT READY";
        return 0;
}
