#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, sum = 0;

    for(int i = 1 ; i <= 5 ; i++){
        cin>>x;
        sum += x;
    }

    if(sum > 0 && sum%5 == 0) cout<<sum/5<<"\n";
    else cout<<"-1\n";

    return 0;
}