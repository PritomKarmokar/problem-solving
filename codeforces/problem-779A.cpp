#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int x;
    int a[5] = {0}, b[5] = {0};

    for(int i = 0 ; i < n ; i++){
        cin>>x;
        a[x-1]++;
    }

    for(int i = 0 ; i < n ; i++){
        cin>>x;
        b[x-1]++;
    }

    int sum = 0;
    bool ok = 1;
    for(int i = 0 ; i < 5; i++){
        if((a[i]+b[i])%2 != 0){
            cout<<"-1\n";
            ok = 0;
            break;
        }
        else{
            sum += abs(a[i]-b[i]);
        }
    }
    
    sum = sum/4;

    if(ok) cout<<sum<<endl;

    return 0;
}