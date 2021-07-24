#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main()
{
    int tc;
    cin>>tc;

    while(tc--){
        int n;
        cin>>n;

        int l = 2*n;
        int arr[l];
        for(int i = 0 ; i < l ; i++) cin>>arr[i];

        sort(arr, arr+l);

        for(int i = 0 ; i < n ; i++) cout<<arr[i]<<" "<<arr[l-i-1]<<" ";
        cout<<endl;
    }
    return 0;
}