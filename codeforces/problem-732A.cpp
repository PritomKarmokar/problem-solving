#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k, r;
    cin>>k>>r;

    int ans = 1, m = k;

    while(true){
        m = (k*ans)%10;
        if(m == 0 || m == r) break;
        ans += 1;
        //printf("k = %d, ans = %d\n", k, ans);
    }

    cout<<ans<<"\n";

    return 0;
}