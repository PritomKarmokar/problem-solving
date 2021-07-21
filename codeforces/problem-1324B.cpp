#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
using namespace std;

int main()
{
    fast;
    int tc; 
    cin>>tc;

    while(tc--){
        int n;
        cin>>n;
        
        int arr[n];
        for(int i = 0 ; i < n ; i++) cin>>arr[i];

        bool ok = 0;

        for(int i = 1; i < n-1; i++){
            int x = arr[i-1];
            for(int j = i+1; j < n ; j++){
                if(arr[j] == x){
                    ok = 1;
                    break;
                }
            }
            if(ok) break;
        }
        if(ok) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}