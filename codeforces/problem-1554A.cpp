#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    //freopen("input.txt","r", stdin);
    //freopen("output.txt","w", stdout);

    int tc;
    cin>>tc;

    while(tc--){
        int n;
        cin>>n;
        
        int arr[n];
        for(int i = 0; i < n ; i++) cin>>arr[i];

        ll ans = 0;
        for(int i = 0; i < n-1; i++){
            ans = max(ans, (ll)arr[i] * (ll)arr[i+1]);
        }

        cout<<ans<<"\n";
    }

    return 0;
}