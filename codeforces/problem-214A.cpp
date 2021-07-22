#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0);

using namespace std;

int main()
{
    fast;

    int n, m;
    cin>>n>>m;

    int ans = 0;

    for(int i = 0 ; i <= n ; i++){
        for(int j = 0 ; j <= m ; j++){
            if((i*i + j == n) and (i + j*j == m))
                ans++;
        }
    }
    cout<<ans<<"\n";

    return 0;
}