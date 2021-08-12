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
        for(int i = 0 ; i < n ; i++) cin>>arr[i];

        sort(arr, arr+n);

        double sum = 0;
        for(int i = 0 ; i < n-1; i++) sum += arr[i];

        double ans = sum/(n-1) + (double) arr[n-1];

        cout<<fixed<<setprecision(10)<<ans<<"\n";
    }
}