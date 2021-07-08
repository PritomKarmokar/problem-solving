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

        if(n%2050 != 0) cout<<"-1\n";
        else{
            while(n%2050 == 0){
                n /= 2050;
            }

            ll sum = 0;
            while(n != 0){
                sum += n%10;
                n /= 10;
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}