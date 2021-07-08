#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0 ; i < n ; i++) cin>>arr[i];

    int mx = INT_MIN, mn = INT_MAX;

    for(int i = 0 ; i < n ; i++){
        if(i == 0){
            mn = abs(arr[i] - arr[i+1]); 
            mx = abs(arr[i] - arr[n-1]);
        }   
        else if(i == n-1){
            mn = abs(arr[i]-arr[i-1]);
            mx = abs(arr[n-1]-arr[0]);
        }
        else{
            mn = min(abs(arr[i]-arr[i-1]), abs(arr[i]-arr[i+1]));
            mx = max(abs(arr[i]-arr[0]), abs(arr[i]-arr[n-1]));
        }
        cout<<mn<<" "<<mx<<endl;
    }

    return 0;
}