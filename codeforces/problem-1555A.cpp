#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int tc;
    cin>>tc;

    while(tc--){
        ll n;
        cin>>n;

        if(n < 6) cout<<"15\n";
        else{
            ll ans = n*2.5;
            if(n%2) ans += 3;

            cout<<ans<<endl;
        }
    }
    return 0;
}