#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[101] = {0};

    for(int i = 0 ; i < n ; i++){
        int x; cin>>x;
        arr[x]++;
    }

    int mx = 0;

    for(int i = 1; i <= 100 ; i++){
        if(mx < arr[i]) mx = arr[i];
    }

    cout<<mx<<endl;

    return 0;
}
