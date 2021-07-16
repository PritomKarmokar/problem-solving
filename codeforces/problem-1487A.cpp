#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool func(int a, int b){
    if(a > b) return 1;
    else return 0;
}

int main()
{
    int tc;
    cin>>tc;

    while(tc--){
        int n;
        cin>>n;

        int arr[n];
        for(int i = 0 ; i < n ; i++) cin>>arr[i];

       sort(arr,arr+n, func);

       int total = 0;

       for(int i = 0 ; i < n-1; i++){
           for(int j = i+1; j < n ; j++){
               if(arr[i] > arr[j]){
                   total++;
                   break;
               }
           }
       }

       cout<<total<<endl;
    }

    return 0;
}