#include<bits/stdc++.h>

using namespace std;

bool check(int n)
{
    int sum = 0;

    while(n != 0){
        sum += n%10;
        n /= 10;
    }

    if(sum%4 == 0) return true;

    return false;
}


int main()
{
    int n;
    cin>>n;

    int ans;

    for(ans = n ; ; ans++){
        if(check(ans)) break;
    }

    cout<<ans<<endl;

    return 0;
}
