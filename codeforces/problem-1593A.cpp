#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;

    while(tc--){
        int arr[3], mx = 0;
        map<int, int> mp;

        for(int i = 0 ; i < 3; i++){
            cin>>arr[i];
            if(arr[i] >= mx){
                mx = arr[i];
                mp[mx]++;
            }
        }
        if(mp[mx] > 1){
            for(int i = 0 ; i < 3; i++){
                if(arr[i] == mx) cout<<"1 ";
                else cout<<mx-arr[i]+1<<" ";
            }
        }
        else{
            for(int i = 0 ; i < 3; i++){
                if(arr[i] == mx) cout<<"0 ";
                else cout<<mx-arr[i]+1<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}