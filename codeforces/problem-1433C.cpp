#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;

    while(tc--){
        int n;
        cin>>n;

        int arr[n];
        int mx = -1;

        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];
            mx = max(mx,arr[i]);
        }

        int index = -1;
        bool ok = 0;
        for(int i = 0 ; i < n ; i++){
            if(arr[i] == mx){
                if(i > 0 and arr[i-1] != mx) index = i+1, ok = 1;
                else if(i < n-1 and arr[i+1] != mx) index = i+1 , ok = 1;
            }
            if(ok) break;
        }

        cout<<index<<"\n";
    }
    return 0;
}