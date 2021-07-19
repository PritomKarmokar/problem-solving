#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;

    while(tc--){
        int n, m, k;
        cin>>n>>m>>k;

        int calc = (n-1) + n*(m-1);

        if(calc == k) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}