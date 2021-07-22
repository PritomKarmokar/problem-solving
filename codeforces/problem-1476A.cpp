#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main()
{
    fast;
    int tc;
    cin>>tc;

    while(tc--){
        int n, k;
        cin>>n>>k;

        if(n > k){
            if(n%k == 0) cout<<"1\n";
            else cout<<"2\n";
        }
        else{
            int m = k/n;
            m += (k%n != 0);
            cout<<m<<"\n";
        }
    }
    return 0;
}