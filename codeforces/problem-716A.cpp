#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt","r", stdin);
    int n, c;
    cin>>n>>c;

    int arr[n];
    for(int i = 0 ; i < n ; i++) cin>>arr[i];
    int ans = 1;

    for(int i = 1; i <n ; i++){
        if(arr[i]-arr[i-1] <= c) ans++;
        else ans=1;
    }
    cout<<ans<<endl;
    return 0;
}