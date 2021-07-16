#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    int tc;
    cin>>tc;

    while(tc--){
        ll a, b;
        cin>>a>>b;

        if(b == 1) cout<<"NO\n";
        else{
            ll m = a*b;

            cout<<"YES\n";
            cout<<a<<" "<<m<<" "<<a+m<<"\n";
        }
    }
    return 0;
}