#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, d;
    cin>>n>>d;

    int arr[n];
    for(int i = 0 ; i < n ; i++) cin>>arr[i];

    for(int i = 1; i < n; i++){
        arr[i] += arr[i-1] + 10;
    }

    if(arr[n-1] <= d){
        int t = (n-1)*10;
        t += (d-arr[n-1]);
        cout<<t/5<<endl;
    }
    else cout<<"-1\n";

    return 0;
}