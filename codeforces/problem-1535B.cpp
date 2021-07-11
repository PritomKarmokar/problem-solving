#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

bool func(int x, int y)
{
    if(x%2 < y%2) return 1;
    return 0;
}

int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    
    int tc;
    cin>>tc;

    while(tc--)
    {
        int n;
        cin>>n;

        int arr[n];
        for(int i = 0 ; i < n ; i++) cin>>arr[i];

        sort(arr,arr+n, func);

        int total = 0;
        //for(auto i: arr) cout<<i<<" ";
        //cout<<endl;

        for(int i = 0 ; i < n ; i++){
            for(int j = i+1 ; j < n ; j++){
                if(__gcd(arr[i], 2*arr[j]) > 1) {
                    total++;
                    //cout<<arr[i]<<" "<<2*arr[j]<<endl;
                }
            }
        }
        cout<<total<<endl;
    }

    return 0;
}