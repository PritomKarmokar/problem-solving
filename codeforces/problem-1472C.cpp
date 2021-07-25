#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int tc;
    cin>>tc;

    while(tc--){
        int n;
        cin>>n;

        vector<int> arr(n);
        for(int i = 0 ; i < n ; i++) cin>>arr[i];

        vector<ll> sum(n);
        ll mx = 0;

        for(int i = n-1; i >= 0 ; i--){
            sum[i] = arr[i];
            if(i + sum[i] < n){
                sum[i] += sum[i+sum[i]];
            }
            mx = max(sum[i], mx);
        }
        cout<<mx<<endl;
    }

    return 0;
}