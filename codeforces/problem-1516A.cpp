#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;

    while(tc--){
        int n, k;
        cin>>n>>k;

        int arr[n];
        for(int i = 0 ; i < n ; i++) cin>>arr[i];

        for(int i = 0 ; i < n-1; i++){
            if(arr[i] >= k){
                arr[i] -= k;
                arr[n-1] += k;
                k = 0;
            }
            else{
                arr[n-1] += arr[i];
                k -= arr[i];
                arr[i] = 0;
            }
            if(k == 0) break;
        }
        
        for(int i = 0 ; i < n ; i++) cout<<arr[i]<<" ";
        cout<<endl;
    }
}