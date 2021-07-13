#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;

        int arr[n];
        int sum = 0;
        
        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];
            sum += arr[i];
        }

        int avg = sum/n;
        
        if(avg*n != sum) {
            cout<<"-1"<<endl;
        }
        else{
            int total = 0;
            for(int i = 0 ; i < n ; i++){
                if(arr[i] > avg) total += 1;
            }
            cout<<total<<endl;
        }
    }
    return 0;
}