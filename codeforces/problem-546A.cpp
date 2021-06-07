#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0) ; cout.tie(0);
 
using namespace std;
 
int main()
{
    fast;
    
    int k , n , w ;
 
    cin>>k>>n>>w;
 
    int total = ( w * (w+1) / 2) * k ;
 
    int ans = total - n ;
 
    if(ans > 0) cout<<ans<<endl;
    else cout<<0<<endl;
 
    return 0 ;
}